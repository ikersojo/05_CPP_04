#include "../inc/WrongCat.hpp"

// Constructors
/* ************************************************************************** */

WrongCat::WrongCat(void) : WrongAnimal()
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default WrongCat constructor called"
					<< "\033[0;39m" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "WrongCat Copy constructor called"
					<< "\033[0;39m" << std::endl;
	*this = obj;
}

// Destructor
/* ************************************************************************** */

WrongCat::~WrongCat(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "WrongCat Destructor called (type = "
					<< this->_type << ")" << "\033[0;39m" << std::endl;
}

// Operator overload:
/* ************************************************************************** */

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
	if (this != &rhs) 
		this->_type = rhs.getType();
	return (*this);
}

// Instance Public Member Functions:
/* ************************************************************************** */

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound! 🐱 🐱 🐱 🐱 🐱" << std::endl;
}

// Stream operator overload to print WrongCat Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const WrongCat& instance)
{
	os << "WrongCat (type = " << instance.getType() << ")";
	return (os);
}
