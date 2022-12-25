/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:53:04 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/01 16:55:08 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class	RobotomyRequestForm : public Form{

	public:
		RobotomyRequestForm(std::string &target);
		RobotomyRequestForm(const Form &cpy);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const &executor)const;

		RobotomyRequestForm	&operator=(const Form &x);

	private:
		RobotomyRequestForm();
		const std::string	_target;
	
};

#endif
