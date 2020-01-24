#ifndef EXPR_HPP
# define EXPR_HPP

# include <exception>
# include "Fixed.hpp"

class ParsingException: public std::exception
{
    const char *what() const;
};

class TokenTree
{
    protected:
        virtual TokenType *clone();
    public:
        virtual ~TokenTree() = 0;

        virtual Fixed eval() = 0;

        static TokenTree *parse(std::string str);
};

class TokenParentheses: public TokenTree
{
    private:
        TokenTree *_content;
    protected:
        TokenType *clone();
    public:
        TokenParentheses(TokenTree *content);

        TokenParentheses();
        ~TokenParentheses();
        TokenParentheses(const TokenParentheses &c);
        TokenParentheses &operator=(const TokenParentheses &c);

        Fixed eval();
};

class TokenAddition: public TokenTree
{
    private:
        TokenTree *_opLeft;
        TokenTree *_opRight;
    protected:
        TokenType *clone();
    public:
        TokenAddition(TokenTree *opLeft, TokenTree *opRight);

        TokenAddition();
        ~TokenAddition();
        TokenAddition(const TokenAddition &c);
        TokenAddition &operator=(const TokenAddition &c);

        Fixed eval();
};

class TokenConstant: public TokenTree
{
    private:
        Fixed _const;
    protected:
        TokenType *clone();
    public:
        TokenConstant(Fixed cnst);

        TokenConstant();
        ~TokenConstant();
        TokenConstant(const TokenConstant &c);
        TokenConstant &operator=(const TokenConstant &c);

        Fixed eval();
};

#endif
