#pragma once

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
public:
	Span();
	Span(unsigned int N);
	~Span();
	Span(const Span& o);
	Span&			operator=(const Span& o);
	void			addNumber(int num);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
	void			fill(int (*f)());
	unsigned int	size();
private:
	unsigned int		m_N;
	std::vector<int>	m_numbers;
};
