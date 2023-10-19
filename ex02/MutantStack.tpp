#pragma once

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() { }

template<typename T>
MutantStack<T>::~MutantStack() { }

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &m) : std::stack<T>(m) { }

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &m)
{
	if (this != &m)
		std::stack<T>::operator=(m);
	return (*this);
}

// typename to indicate that ::iterator is a dependent type
template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin( void )
{ return (this->c.begin()); }

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end( void )
{ return (this->c.end()); }

template<typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin( void )
{ return (this->c.rbegin()); }

template<typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend( void )
{ return (this->c.rend()); }
