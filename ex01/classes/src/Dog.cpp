#include "../inc/Dog.hpp"

// Constructors
/* ************************************************************************** */

Dog::Dog(void) : Animal()
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default Dog constructor called"
					<< "\033[0;39m" << std::endl;
		this->setType("Dog");
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Dog Copy constructor called"
					<< "\033[0;39m" << std::endl;
	*this = obj;
}

// Destructor
/* ************************************************************************** */

Dog::~Dog(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Dog Destructor called (type = "
					<< this->_type << ")" << "\033[0;39m" << std::endl;
}

// Operator overload:
/* ************************************************************************** */

Dog&	Dog::operator=(const Dog& rhs)
{
	if (this != &rhs) 
		this->_type = rhs.getType();
	return (*this);
}

// Instance Public Member Functions:
/* ************************************************************************** */

void	Dog::makeSound(void) const
{
	std::cout << "Dog sound! 🐕 🐕 🐕 🐕 🐕" << std::endl;
}

// Stream operator overload to print Dog Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const Dog& instance)
{
	os << "Dog (type = " << instance.getType() << ")";
	return (os);
}
