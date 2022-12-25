/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:26:34 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/16 17:35:59 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
#include <vector>

class	Span{

	public:
		Span(unsigned int N);
		Span(const Span &cpy);
		~Span();

		Span	&operator=(const Span &x);

		void	add(int nb);
		void	addNumber(int nb);
		int		shortestSpan();
		int		longestSpan();
		void	printLst()const;

		template<typename T>
		void	fillRange(typename T::iterator begin, typename T::iterator end);
			
		class	FullSpanException : public std::exception{

			public:
				virtual const char *what() const throw(){

					return ("Span is full");
				}
		};
		
		class	ShortSpanException : public std::exception{

			public:
				virtual const char *what() const throw(){

					return ("Span is too short");
				}			
		};
		
	private:
		Span();
		unsigned int	_size;
		unsigned int	_n;
		std::list<int>	_lst;
};

template<typename T>
void	Span::fillRange(typename T::iterator begin, typename T::iterator end){

	typename T::iterator it = begin;

	while (it != end){

		addNumber(*it);
		it++;
	}
	return;
}

#endif
