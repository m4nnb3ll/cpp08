#pragma once

# include <iostream>
# include <vector>

class Span
{
public:
	Span(unsigned int N);
	// to canon it later
	void			addNumber(int num);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
	void			fill(int (*f)());
	std::vector<int>	m_numbers;
private:
	unsigned int		m_N;
};
