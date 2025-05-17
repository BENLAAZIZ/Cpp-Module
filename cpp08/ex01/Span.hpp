#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
	private:
		unsigned int N;
		std::vector<int> numbers;
	public:
		Span(unsigned int n);
		Span(const Span &src);
		Span &operator=(const Span &src);
		~Span();

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();

		template <typename T>
		void add_range(T begin, T end)
		{
			unsigned int size = std::distance(begin, end);
			if (numbers.size() + size > N)
				throw std::length_error("Span is full"); 
			for(T it = begin; it != end; ++it)
				numbers.push_back(*it);
		}		
};

#endif