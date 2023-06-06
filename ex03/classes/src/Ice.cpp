#include "../inc/Ice.hpp"

// Constructors
/* ************************************************************************** */

Ice::Ice(void) : AMateria("ice")
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default Ice constructor called"
					<< "\033[0;39m" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice& obj) : AMateria(obj)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Ice Copy constructor called"
					<< "\033[0;39m" << std::endl;
	*this = obj;
}

// Destructor
/* ************************************************************************** */

Ice::~Ice(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Ice Destructor called (type = "
					<< this->_type << ")" << "\033[0;39m" << std::endl;
}

// Operator overload:
/* ************************************************************************** */

Ice&	Ice::operator=(const Ice& rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

// Instance Public Member Functions:
/* ************************************************************************** */

Ice*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
