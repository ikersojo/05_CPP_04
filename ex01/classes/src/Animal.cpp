/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:27:25 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/06 21:27:26 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

// Constructors
/* ************************************************************************** */

Animal::Animal(void) : _type("unknown")
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default Animal constructor called"
					<< "\033[0;39m" << std::endl;
}

Animal::Animal(const Animal& obj)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Animal Copy constructor called"
					<< "\033[0;39m" << std::endl;
	*this = obj;
}

// Destructor
/* ************************************************************************** */

Animal::~Animal(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Animal Destructor called (type = "
					<< this->_type << ")" << "\033[0;39m" << std::endl;
}

// Operator overload:
/* ************************************************************************** */

Animal&	Animal::operator=(const Animal& rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

// Instance Public Member Functions:
/* ************************************************************************** */

std::string		Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound!" << std::endl;
}

// Stream operator overload to print Animal Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const Animal& instance)
{
	os << "Animal (type = " << instance.getType() << ")";
	return (os);
}
