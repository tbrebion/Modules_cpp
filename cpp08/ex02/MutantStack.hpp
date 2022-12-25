/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:42:04 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/17 16:53:48 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <cstdlib>
# include <algorithm>
# include <map>
# include <list>
# include <stack>
# include <vector>
# include <numeric>

template<typename T>
class MutantStack : public std::stack<T>{

	public:
		MutantStack(){}
		MutantStack(const MutantStack &mStack) : std::stack<T>(mStack){}
		~MutantStack(){}
		
		MutantStack	&operator=(const MutantStack &x){ 
			
			std::stack<T>::operator=(x); 
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator	iterator;
		
		iterator	begin() { return (this->c.begin()); }
		iterator	end() { return (this->c.end()); }
		
};

#endif
