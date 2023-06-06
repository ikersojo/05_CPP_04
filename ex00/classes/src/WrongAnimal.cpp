/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:26:29 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/06 21:26:29 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

// Constructors
/* ************************************************************************** */

WrongAnimal::WrongAnimal(void) : _type("unknown")
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default WrongAnimal constructor called"
					<< "\033[0;39m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "WrongAnimal Copy constructor called"
					<< "\033[0;39m" << std::endl;
	*this = obj;
}

// Destructor
/* ************************************************************************** */

WrongAnimal::~WrongAnimal(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "WrongAnimal Destructor called (type = "
					<< this->_type << ")" << "\033[0;39m" << std::endl;
}

// Operator overload:
/* ************************************************************************** */

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

// Instance Public Member Functions:
/* ************************************************************************** */

std::string		WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound!" << std::endl;
}

// Stream operator overload to print WrongAnimal Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const WrongAnimal& instance)
{
	os << "WrongAnimal (type = " << instance.getType() << ")";
	return (os);
}
