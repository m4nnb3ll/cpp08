#include "Span.hpp"
#include <stdio.h>

int	fun()
{
	return (std::rand() % 100000);
}

int main()
{
	Span test = Span(10000);
	test.fill(fun);
	try
	{
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
		std::cout << test.m_numbers.size() << std::endl;
	}
	catch (const std::runtime_error &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}