#include "../inc/Cat.hpp"

// Constructors
/* ************************************************************************** */

Cat::Cat(void) : Animal()
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default Cat constructor called"
					<< "\033[0;39m" << std::endl;
	this->setType("Cat");
	_catBrain = new Brain();
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
	delete _catBrain;
}

// Operator overload:
/* ************************************************************************** */

Cat&	Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		this->_catBrain = new Brain();
		int i = -1;
		while (++i < MAXIDEAS)
			this->_catBrain->addIdea(rhs._catBrain->getIdea(i));
	}
	return (*this);
}

// Instance Public Member Functions:
/* ************************************************************************** */

void	Cat::makeSound(void) const
{
	std::cout << "Cat sound! 🐱 🐱 🐱 🐱 🐱" << std::endl;
}

void	Cat::printAllIdeas(void)
{
	_catBrain->printAllIdeas();
}

void	Cat::addIdea(std::string idea)
{
	this->_catBrain->addIdea(idea);
}

// Stream operator overload to print Cat Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const Cat& instance)
{
	os << "Cat (type = " << instance.getType() << ")";
	return (os);
}
