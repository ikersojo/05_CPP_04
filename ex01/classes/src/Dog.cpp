#include "../inc/Dog.hpp"

// Constructors
/* ************************************************************************** */

Dog::Dog(void) : Animal()
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default Dog constructor called"
					<< "\033[0;39m" << std::endl;
	this->setType("Dog");
	_dogBrain = new Brain();
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
	delete _dogBrain;
}

// Operator overload:
/* ************************************************************************** */

Dog&	Dog::operator=(const Dog& rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		this->_dogBrain = new Brain();
		int i = -1;
		while (++i < MAXIDEAS)
			this->_dogBrain->addIdea(rhs._dogBrain->getIdea(i));
	}
	return (*this);
}

// Instance Public Member Functions:
/* ************************************************************************** */

void	Dog::makeSound(void) const
{
	std::cout << "Dog sound! 🐕 🐕 🐕 🐕 🐕" << std::endl;
}

void	Dog::printAllIdeas(void)
{
	_dogBrain->printAllIdeas();
}

void	Dog::addIdea(std::string idea)
{
	this->_dogBrain->addIdea(idea);
}

// Stream operator overload to print Dog Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const Dog& instance)
{
	os << "Dog (type = " << instance.getType() << ")";
	return (os);
}
