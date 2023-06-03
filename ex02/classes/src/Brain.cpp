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
	this->_maxIndex = 0;
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

void	Brain::addIdea(std::string idea)
{
	if (this->_maxIndex < MAXIDEAS)
	{
		this->_ideas[this->_maxIndex] = idea;
		this->_maxIndex ++;
	}
	else
		std::cout << "There is no room in the Brain fot more ideas" <<std::endl;
}

void	Brain::printAllIdeas(void)
{
	std::cout << "All ideas:" << std::endl;
	int i = -1;
	while (++i < _maxIndex)
		std::cout << "    " << i << "- " << this->getIdea(i) << std::endl;
}
