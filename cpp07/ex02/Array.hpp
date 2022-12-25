/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:11:35 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/11 16:40:12 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class	Array{

	public:
		Array() : _len(0), _arr(NULL){ }
		Array(unsigned int n) : _len(n), _arr(new T[n]) { }
		Array(Array const &cpy){

			this->_arr = NULL;
			(*this) = cpy;
		}
		~Array(){
			
			delete[] _arr;
		}
		
		unsigned int size()const{

			return (this->_len);
		}


		Array	&operator=(Array const &ref){

			if (this != &ref){
				
				this->_len = ref._len;
				if (this->_arr != NULL){

					delete [] this->_arr;
				}
				this->_arr = new T[this->_len];
				for (unsigned int i = 0; i < this->_len; i++){

					this->_arr[i] = ref._arr[i];
				}
			}
			return (*this);
		}
		
		T	&operator[](int i){

			if (i < 0 || static_cast<unsigned int>(i) >= this->_len || this->_arr == NULL){

				throw Array::ArrayException();
			}
			return (this->_arr[i]);
		}

		class	ArrayException : public std::exception{

			public:
				virtual const char *what() const throw(){

					return ("ArrayException : Invalid access");
				}
		};
	
	private:
		unsigned int	_len;
		T				*_arr;
};

#endif
