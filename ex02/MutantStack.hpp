#pragma once

#include <iostream>
#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack &m);
	MutantStack			&operator=(const MutantStack &m);

	typedef	typename	std::stack<T>::container_type Container;

	typedef	typename	Container::iterator	iterator;
	iterator			begin();
	iterator			end();

	typedef	typename	Container::reverse_iterator	reverse_iterator;
	reverse_iterator	rbegin();
	reverse_iterator	rend();
};

#include "MutantStack.tpp"
