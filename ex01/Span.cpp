#include "Span.hpp"

Span::Span() : m_N(0) { }
Span::~Span() { };

Span::Span(const Span& o)
	: m_N(o.m_N), m_numbers(o.m_numbers) { }

Span&	Span::operator=(const Span& o)
{
	if (this != &o)
	{
		this->m_numbers.clear();
		this->m_N = o.m_N;
		this->m_numbers = o.m_numbers;
	}
	return (*this);
}

Span::Span(unsigned int N) : m_N(N) {}

void	Span::addNumber(int num)
{
	if (m_numbers.size() >= m_N)
		throw (std::runtime_error("Span is full. Cannot add more numbers."));
	m_numbers.push_back(num);
}

unsigned int	Span::shortestSpan()
{
	unsigned int	shortest;
	unsigned int	tmp_span;

	if (m_numbers.size() < 2)
		throw (std::runtime_error("Insufficient numbers to calculate shortest span."));
	std::sort(m_numbers.begin(), m_numbers.end());
	shortest = std::abs(m_numbers[1] - m_numbers[0]);
	for (unsigned int i = 2; i < m_numbers.size(); i++)
	{
		tmp_span = std::abs(m_numbers[i] - m_numbers[i - 1]);
		shortest = tmp_span < shortest ? tmp_span : shortest;
	}
	return (shortest);
}

unsigned int	Span::longestSpan()
{
	if (m_numbers.size() < 2)
		throw (std::runtime_error("Insufficient numbers to calculate longest span."));
	std::sort(m_numbers.begin(), m_numbers.end());
	return (std::abs(m_numbers[m_numbers.size() - 1] - m_numbers[0]));
}

void	Span::fill(int (*f)())
{
	std::vector<int> tmp_v(m_N);
	std::generate(tmp_v.begin(), tmp_v.end(), f);
	m_numbers = tmp_v;
}

unsigned int	Span::size()
{
	return (m_N);
}