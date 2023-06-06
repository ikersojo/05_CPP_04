/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:26:21 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/06 21:26:22 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// Constructors
/* ************************************************************************** */

Cat::Cat(void) : Animal()
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default Cat constructor called"
					<< "\033[0;39m" << std::endl;
	this->setType("Cat");
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Cat Copy constructor called"
					<< "\033[0;39m" << std::endl;
	*this = obj;
}

// Destructor
/* ************************************************************************** */

Cat::~Cat(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Cat Destructor called (type = "
					<< this->_type << ")" << "\033[0;39m" << std::endl;
}

// Operator overload:
/* ************************************************************************** */

Cat&	Cat::operator=(const Cat& rhs)
{
	if (this != &rhs) 
		this->_type = rhs.getType();
	return (*this);
}

// Instance Public Member Functions:
/* ************************************************************************** */

void	Cat::makeSound(void) const
{
	std::cout << "Cat sound! 🐱 🐱 🐱 🐱 🐱" << std::endl;
}

// Stream operator overload to print Cat Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const Cat& instance)
{
	os << "Cat (type = " << instance.getType() << ")";
	return (os);
}
