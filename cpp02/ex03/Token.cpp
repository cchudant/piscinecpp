#include <cstdlib>
#include "Token.hpp"

const char *ParsingException::what() const
{
    return "Parsing exception";
}

// Parentheses

TokenParentheses::TokenParentheses(TokenTree *content): _content(content)
{
}

TokenParentheses::TokenParentheses(): _content(NULL)
{
}

TokenParentheses::~TokenParentheses()
{
    delete _content;
}

TokenParentheses::TokenParentheses(const TokenParentheses &c): _content(c._content.clone())
{
}

TokenParentheses &TokenParentheses::operator=(const TokenParentheses &c)
{
    delete _content;
    _content = c._content->clone();
    return *this;
}

TokenParentheses *TokenParentheses::clone()
{
    return new TokenParentheses(this->_content->clone());
}

// Addition

TokenAddition::TokenAddition(TokenTree *opLeft, TokenTree *opRight): _opLeft(opLeft), _opRight(opRight)
{
}

TokenAddition::TokenAddition(): _opLeft(NULL), _opRight(NULL)
{
}

TokenAddition::~TokenAddition()
{
    delete _opLeft;
    delete _opRight;
}

TokenAddition::TokenAddition(const TokenAddition &c): _opLeft(c._opLeft.clone()), _opRight(c._opLeft.clone())
{
}

TokenAddition &TokenAddition::operator=(const TokenAddition &c)
{
    delete _opLeft;
    delete _opRight;
    _opLeft = c._opLeft->clone();
    _opRight = c._opRight->clone();
    return *this;
}

TokenAddition *TokenAddition::clone()
{
    return new TokenAddition(this->_opLeft->clone(), this->_opRight->clone());
}

// Constant

TokenConstant::TokenConstant(Fixed *cnst): _const(cnst)
{
}

TokenConstant::TokenConstant(): _const(0)
{
}

TokenConstant::~TokenConstant()
{
}

TokenConstant::TokenConstant(const TokenConstant &c): _const(c._const)
{
}

TokenConstant &TokenConstant::operator=(const TokenConstant &c)
{
    _const = c._const;
    return *this;
}

TokenConstant *TokenConstant::clone()
{
    return new TokenConstant(this->_const);
}

// Eval

Fixed TokenParentheses::eval()
{
    return _content.eval();
}

Fixed TokenAddition::eval()
{
    return _opLeft.eval() + _opRight.eval();
}

Fixed TokenConstant::eval()
{
    return _const;
}

// Parsing

static TokenConstant *parseConstant(const std::string str)
{
    std::string::size_type i = 0;
    bool dot = false;
    if (str[i] == '-' || str[i] == '+')
        i++;
    for (; i < str.length(); i++)
    {
        if (!dot && str[i] == '.')
            dot = true;
        if (str[i] < '0' || str[i] > '9')
            throw ParsingException();
    }

    return new TokenConstant(atof(str));
}

static TokenTree *parseTerm(const std::string str)
{
    if (!str.length())
        throw ParsingException();
    if (str[0] == '(')

}

TokenTree *TokenTree::parse(const std::string str)
{

}
