/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:06:50 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/04 14:30:25 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <cstdlib>

class	Bureaucrat;

class	Form{

	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExec);
		Form(const Form &cpy);
		virtual ~Form();
		
		std::string getName()const;
		bool		getSignedStatus()const;
		int			getGradeToSign()const;
		int			getGradeToExec()const;
	
		virtual void	execute(const Bureaucrat &executor)const = 0;
		
		Form		&operator=(const Form &x);
		
		void		beSigned(const Bureaucrat &x);

		
		class	GradeTooHighException : public std::exception{
			
			public:
				virtual const char *what() const throw(){
					
					return("Form::GradeTooHighException : form grade is to high");
				}
		};
		
		class	GradeTooLowException : public std::exception{
			
			public:
				virtual const char *what() const throw(){
					
					return("Form::GradeTooLowException : form grade is to low");
				}
		};
		
		class	FormularNotSignedException : public std::exception{

			public:
				virtual const char *what() const throw(){
					
					return ("FormularNotSignedException : Formular is not signed");
				}
		};

		// class	FormularNotExecException : public std::exception{

		// 	public:
		// 		virtual const char *what() const throw(){

		// 			return("FormularNotExecException : Formular can't be exec");
		// 		}			
		// };
		
	private:
		std::string const	_name;
		bool				_is_signed;
		int const			_grade_to_sign;
		int const			_grade_to_exec;
};

std::ostream	&operator<<(std::ostream &out, Form &form);

#endif
