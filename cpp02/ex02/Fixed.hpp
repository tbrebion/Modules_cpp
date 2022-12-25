/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:47:31 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/03 17:11:25 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed{

	public:
		Fixed();
		Fixed(const Fixed &x);
		Fixed(const int val);
		Fixed(const float val);
		~Fixed();
		int		getRawBits()const;
		void	setRawBits(int const raw);
		float	toFloat()const;
		int		toInt()const;
		Fixed &operator=(const Fixed &x);
		
		static Fixed	&min(Fixed &x, Fixed &y);
		static Fixed	&max(Fixed &x, Fixed &y);		
		static const Fixed	&min(const Fixed &x, const Fixed &y);
		static const Fixed	&max(const Fixed &x, const Fixed &y);
		
		Fixed operator+(const Fixed &x)const;
		Fixed operator-(const Fixed &x)const;
		Fixed operator*(const Fixed &x)const;
		Fixed operator/(const Fixed &x)const;
		
		bool operator==(const Fixed &x)const;
		bool operator!=(const Fixed &x)const;
		bool operator>=(const Fixed &x)const;
		bool operator<=(const Fixed &x)const;
		bool operator>(const Fixed &x)const;
		bool operator<(const Fixed &x)const;
	
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
		
	private:
		int	_value;
		static const int _bits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &x);

#endif
