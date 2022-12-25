/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:57:33 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/08 16:57:04 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERSION_HPP
#define SCALAR_CONVERSION_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <climits>
#include <cmath>

class	ScalarConversion{

	public:
		ScalarConversion(const std::string &literal);
		ScalarConversion(const ScalarConversion &cpy);
		~ScalarConversion();

		ScalarConversion	&operator=(const ScalarConversion &x);
		
		char getChar()const;
		int	getInt()const;
		float getFloat()const;
		double getDouble()const;
		
		void	launchConversion()const;
		
		class	ConversionExceptionImpossible : public std::exception{

			public:
				const char *what() const throw(){

					return ("Impossible");
				}
		};
		
		class	ConversionExceptionDisplay : public std::exception{

			public:
				const char *what() const throw(){
					
					return ("Non displayable");
				}
		};
		
	private:
		ScalarConversion();
		double	_conv;
};


#endif
