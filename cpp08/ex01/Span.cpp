/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:26:32 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/16 17:15:08 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size(N), _n(0){

	return;
}

Span::Span(const Span &cpy){

	(*this) = cpy;
	return;
}

Span::~Span(){

	return;
}

void	Span::add(int nb){

	if (this->_n < this->_size){

		this->_lst.push_back(nb);
		this->_n++;
	}
	else{

		throw Span::FullSpanException();
	}
	return;
}

void	Span::addNumber(int nb){

	try{

		this->add(nb);
	}
	catch(std::exception &e){

		std::cout << e.what() << std::endl;
	}
}

int		Span::shortestSpan(){

	if (this->_lst.size() < 2){

		throw Span::ShortSpanException();
	}
	this->_lst.sort();
	std::list<int>::const_iterator it = this->_lst.begin();
	std::list<int>::const_iterator itj = it;
	std::list<int>::const_iterator ite = this->_lst.end();
	std::advance(itj, 1);
	int	shortest = std::abs(*it - *itj);
	while (it != ite){

		if (std::abs(*it - *itj) < shortest){

			shortest = std::abs(*it - *itj);
		}
		it++, itj++;
	}
	return (shortest);
}

int		Span::longestSpan(){

	if (this->_lst.size() < 2){

		throw Span::ShortSpanException();
	}
	int min = *std::min_element(this->_lst.begin(), this->_lst.end());
	int max = *std::max_element(this->_lst.begin(), this->_lst.end());
	return (std::abs(min - max));
}

void	Span::printLst()const{

	if (!this->_lst.size()){

		std::cout << "Span is empty" << std::endl;
	}
	for (std::list<int>::const_iterator i = _lst.begin(); i != _lst.end(); i++){

		std::cout << *i << std::endl;
	}
	return;
}

Span	&Span::operator=(const Span &x){

	this->_n = x._n;
	this->_lst = x._lst;
	return (*this);
}
