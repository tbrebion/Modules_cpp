/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:06:50 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/01 10:08:24 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form{

	public:
		Form();
		Form(std::string &name, int gradeToSign, int gradeToExec);
		Form(const Form &cpy);
		~Form();
		
		std::string getName()const;
		bool		getSignedStatus()const;
		int			getGradeToSign()const;
		int			getGradeToExec()const;
	
		Form		&operator=(const Form &x);
		
		void		beSigned(const Bureaucrat &x);
		
		class	GradeTooHighException : public std::exception{
			
			public:
				virtual const char *what() const throw(){
					
					return("Form::GradeTooHighException : grade is to high");
				}
		};
		
		class	GradeTooLowException : public std::exception{
			
			public:
				virtual const char *what() const throw(){
					
					return("Form::GradeTooLowException : grade is to low");
				}
		};
		
		
	private:
		std::string const	_name;
		bool				_is_signed;
		int const			_grade_to_sign;
		int const			_grade_to_exec;
};

std::ostream	&operator<<(std::ostream &out, Form &form);

#endif
