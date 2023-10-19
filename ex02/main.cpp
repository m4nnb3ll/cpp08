#include "MutantStack.hpp"

int main()
{
	MutantStack<int>	test;
	
	test.push(42);
	test.push(1337);
	test.push(19);
	test.push(21);
	test.push(0);
	for (MutantStack<int>::iterator it = test.begin(); it != test.end(); it++)
		std::cout << *it << std::endl;
	for (MutantStack<int>::reverse_iterator it = test.rbegin(); it != test.rend(); it++)
		std::cout << *it << std::endl;
	return (0);
}
