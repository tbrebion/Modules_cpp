/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:46:55 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/19 16:06:02 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replaceString(std::ofstream &fileout, std::string s1, std::string s2, std::string buff){

	size_t pos;
	size_t toSkip;

	pos = buff.find(s1);
	if (pos == std::string::npos){
		
		fileout << buff;
		return;
	}
	else {

		fileout << buff.substr(0, pos);
		fileout << s2;
		toSkip = pos + s1.length();
		replaceString(fileout, s1, s2, buff.substr(toSkip));
	}
	return;
}

int	main(int ac, const char **av){

	std::ifstream	fileIn;
	std::ofstream	fileOut;
	std::string	s1;
	std::string	s2;
	std::string	file;
	std::string	fileReplace;
	std::string	buff;
	
	if (ac == 4){
		
		s1 = av[2];
		s2 = av[3];		
		
		file = av[1];
		fileReplace = file + ".replace";
		fileIn.open(file.c_str());
		if (fileIn.good() == false){
			
			std::cerr << "Error, input file" << std::endl; 
			return (1);
		}
		fileOut.open(fileReplace.c_str());
		if (fileOut.good() == false){
			
			std::cerr << "Error, output file" << std::endl; 
			return (1);
		}
		while (getline(fileIn, buff))			
			replaceString(fileOut, s1, s2, buff + '\n');
			
		fileIn.close();
		fileOut.close();
	}
	else
		std::cout << "INVALID ARGS" << std::endl;
	return 0;
}
