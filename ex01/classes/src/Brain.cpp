#include "../inc/Brain.hpp"

// Constructors
/* ************************************************************************** */

Brain::Brain(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default Brain constructor called"
					<< "\033[0;39m" << std::endl;
	int i = -1;
	while (++i < MAXIDEAS)
		this->_ideas[i] = "-";
}

Brain::Brain(const Brain& obj)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Brain Copy constructor called"
					<< "\033[0;39m" << std::endl;
	*this = obj;
}

// Destructor
/* ************************************************************************** */

Brain::~Brain(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Brain Destructor called"
					<< "\033[0;39m" << std::endl;
}

// Operator overload:
/* ************************************************************************** */

Brain&	Brain::operator=(const Brain& rhs)
{
	if (this != &rhs)
	{
		int i = -1;
		while (++i < MAXIDEAS)
			this->_ideas[i] = rhs.getIdea(i);
	}
	return (*this);
}

std::string		Brain::getIdea(int i) const
{
	return (this->_ideas[i]);
}

// Stream operator overload to print Brain Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const Brain& instance)
{
	int i = -1;
	while (++i < MAXIDEAS && instance.getIdea(i) != "-")
	{
		os << i <<".- " << instance.getIdea(i) << std::endl;
	}
	return (os);
}
