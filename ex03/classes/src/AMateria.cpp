#include "../inc/AMateria.hpp"

// Constructors
/* ************************************************************************** */

AMateria::AMateria(void) : _type("undefined")
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default AMateria constructor called"
					<< "\033[0;39m" << std::endl;
}

AMateria::AMateria(const std::string& type) : _type(type)
{

	if (DEBUG == 1)
		std::cout << "\033[0;33m" << this->getType() << " AMateria constructor called"
					<< "\033[0;39m" << std::endl;
}

AMateria::AMateria(const AMateria& obj)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "AMateria Copy constructor called"
					<< "\033[0;39m" << std::endl;
	*this = obj;
}

// Destructor
/* ************************************************************************** */

AMateria::~AMateria(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "AMateria Destructor called (type = "
					<< this->_type << ")" << "\033[0;39m" << std::endl;
}

// Operator overload:
/* ************************************************************************** */

AMateria&	AMateria::operator=(const AMateria& rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

// Instance Public Member Functions:
/* ************************************************************************** */

const std::string&	AMateria::getType() const
{
	return (this->_type);
}

// Stream operator overload to print AMateria Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const AMateria& instance)
{
	os << "Materia (type = " << instance.getType() << ")";
	return (os);
}
