/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:35:22 by jvalenci          #+#    #+#             */
/*   Updated: 2023/01/11 11:58:21 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"
using std::cout;

//! Constructors
RobotomyRequestForm::RobotomyRequestForm() :
Form("RobotomyRequestForm", 72, 45), _target("default")
{
	cout << BOLD 
	<< YELLOW << "Default Constructor called of RobotomyRequestForm\n" << END;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	cout << BOLD 
	<< YELLOW << "Copy Constructor called of RobotomyRequestForm\n" << END;
	*this = copy;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
Form("RobotomyRequestForm", 72, 45), _target("default")
{
	cout << BOLD 
	<< YELLOW << "Parameterized Constructor called of RobotomyRequestForm\n" << END;
}


//! Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	cout << BOLD 
	<< RED << "Destructor called of RobotomyRequestForm\n" << END;
}


//! Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	cout << BOLD 
	<< RED << "Operator overload = called of RobotomyRequestForm\n" << END;
	if (this == &assign)
		return *this;
	*this = assign;
	return *this;
}


//! Getters / Setters
const std::string RobotomyRequestForm::get_target() const
{
	return _target;
}


//! Stream operators
std::ostream & operator<<(std::ostream &stream, const RobotomyRequestForm &object)
{
	cout << BOLD 
	<< RED << "Operator overload = called of RobotomyRequestForm\n" << END;
	//?---------------------------------------------------------------------
	stream << BOLD << RED << "Name: " << END << BOLD << object.getName()
	<< RED << " Signed: " << END << BOLD << object.getSigned() << RED 
	<< " Required grade: " << END << BOLD << object.getRequiredToSign()
	<< RED << " Required to execute: " << END << BOLD 
	<< object.getRequiredToExec() << END << std::endl;

	return stream;
}
