/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <cchudant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 16:33:33 by cchudant          #+#    #+#             */
/*   Updated: 2020/02/25 17:50:22 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <assert.h>
#include "mutantstack.hpp"

void tests()
{
	MutantStack<int> stack;

	assert(stack.size() == 0);
	assert(stack.empty());

	stack.push(0);
	assert(stack.top() == 0);
	assert(stack.size() == 1);
	assert(!stack.empty());

	stack.push(1);
	assert(stack.top() == 1);
	assert(stack.size() == 2);
	assert(!stack.empty());

	stack.push(2);
	assert(stack.top() == 2);
	assert(stack.size() == 3);
	assert(!stack.empty());

	stack.push(3);
	assert(stack.top() == 3);
	assert(stack.size() == 4);
	assert(!stack.empty());

	stack.push(4);
	assert(stack.top() == 4);
	assert(stack.size() == 5);
	assert(!stack.empty());

	MutantStack<int> stack2(stack);
	assert(stack2.top() == 4);
	assert(stack2.size() == 5);
	assert(!stack2.empty());

	stack.pop();
	assert(stack.top() == 3);
	assert(stack.size() == 4);
	assert(!stack.empty());

	stack.pop();
	assert(stack.top() == 2);
	assert(stack.size() == 3);
	assert(!stack.empty());

	stack.pop();
	assert(stack.top() == 1);
	assert(stack.size() == 2);
	assert(!stack.empty());

	stack.pop();
	assert(stack.top() == 0);
	assert(stack.size() == 1);
	assert(!stack.empty());

	stack.pop();
	assert(stack.size() == 0);
	assert(stack.empty());

	// iterators
	MutantStack<int>::iterator ite = stack2.begin();
	assert(*ite == 0);
	ite++;
	assert(*ite == 1);
	ite++;
	assert(*ite == 2);
	ite++;
	assert(*ite == 3);
	ite++;
	assert(*ite == 4);
	assert(ite == stack2.end());

}

int main(){
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(18);
	mstack.push(123);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while(it != ite){
		std::cout << *it << std::endl;++it;
	}
	MutantStack<int> s(mstack);

	tests();
}
