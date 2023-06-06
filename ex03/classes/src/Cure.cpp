#include "../inc/Cure.hpp"

// Constructors
/* ************************************************************************** */

Cure::Cure(void) : AMateria("cure")
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default Cure constructor called"
					<< "\033[0;39m" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure& obj) : AMateria(obj)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Cure Copy constructor called"
					<< "\033[0;39m" << std::endl;
	*this = obj;
}

// Destructor
/* ************************************************************************** */

Cure::~Cure(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Cure Destructor called (type = "
					<< this->_type << ")" << "\033[0;39m" << std::endl;
}

// Operator overload:
/* ************************************************************************** */

Cure&	Cure::operator=(const Cure& rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

// Instance Public Member Functions:
/* ************************************************************************** */

Cure*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
