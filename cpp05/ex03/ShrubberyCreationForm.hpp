/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:53:52 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/04 13:26:06 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "fstream"

class	ShrubberyCreationForm : public Form{

	public:
		ShrubberyCreationForm(std::string &target);
		ShrubberyCreationForm(const Form &cpy);
		~ShrubberyCreationForm();
		
		void	execute(const Bureaucrat &executor)const;

		ShrubberyCreationForm	&operator=(const Form &x);

	private:
		ShrubberyCreationForm();
		const std::string	_target;
		
};

#endif
