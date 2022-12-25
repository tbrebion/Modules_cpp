/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:51:52 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/01 11:33:29 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm : public Form{
	
	public:
		PresidentialPardonForm(std::string &target);
		PresidentialPardonForm(const Form &cpy);
		~PresidentialPardonForm();
		
		void	execute(const Bureaucrat &executor)const;

		PresidentialPardonForm	&operator=(const Form &x);

		private:
			PresidentialPardonForm();
			const std::string	_target;
			
};

#endif
