/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:53:19 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/08 15:18:25 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

#define HIGHEST_GRADE 1
#define LOWEST_GRADE 150
#define DEFAULT_GRADE 150

class	Form;

class	Bureaucrat{

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat();

		int	getGrade()const;
		std::string getName()const;
		bool	exceptionHandler(int grade);
		
		void	signForm(Form &x)const;
		
		Bureaucrat	&operator=(const Bureaucrat &x);
		Bureaucrat	&operator++();
		Bureaucrat	&operator--();

		class	GradeTooHighException : public std::exception{
			
			public:
				virtual const char *what() const throw(){
				
					return ("GradeTooHighException : grade is to high");
				}
		};

		class	GradeTooLowException : public std::exception{

			public:
				virtual const char *what() const throw(){

					return ("GradeTooLowException : grade is too low");
				}
		};
		
	private:
		std::string const _name;
		int			_grade;
	
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &x);

#endif
