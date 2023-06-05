#include "../inc/MateriaSource.hpp"

// Constructors
/* ************************************************************************** */

MateriaSource::MateriaSource(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default MateriaSource constructor called"
					<< "\033[0;39m" << std::endl;
	int	i = 0;
	while (i < 4)
		this->_knownMateria[i++] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "MateriaSource Copy constructor called"
					<< "\033[0;39m" << std::endl;
	*this = obj;
}

// Destructor
/* ************************************************************************** */

MateriaSource::~MateriaSource(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "MateriaSource Destructor called"
					<< "\033[0;39m" << std::endl;
	int	i = -1;
	while (++i < 4)
	{
		if (this->_knownMateria[i] != NULL)
		{
			delete _knownMateria[i];
			this->_knownMateria[i] = NULL;
		}
	}
}

// Operator overload:
/* ************************************************************************** */

MateriaSource&	MateriaSource::operator=(const MateriaSource& rhs)
{
	int			i;
	std::string	_tempInventorySlotNames;

	if (this != &rhs)
	{
		i = -1;
		while (++i < 4)
			this->_knownMateria[i] = rhs._knownMateria[i];
	}
	return (*this);
}

// Instance Public Member Functions:
/* ************************************************************************** */

void		MateriaSource::learnMateria(AMateria* m)
{
	int	i = -1;
	while (++i < 4)
	{
		if (this->_knownMateria[i] == NULL)
		{
			this->_knownMateria[i] = m;
			break ;
		}
	}
	if (i == 4)
		std::cout << "No empty slots! Materia cannot be added!" << std::endl;
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	int	i = -1;
	while (++i < 4)
	{
		if (this->_knownMateria[i] != NULL && this->_knownMateria[i]->getType() == type)
		{
			std::cout << this->_knownMateria[i]->getType() << " materia created!" << std::endl;
			return (this->_knownMateria[i]->clone());
		}
	}
	std::cout << "Unknown Materia!" << std::endl;
	return (NULL);
}

void		MateriaSource::printKnownMateria(void)
{
	std::cout << "Known Materia: ";
	int	i = -1;
	while (++i < 4)
		std::cout << "[" << this->_knownMateria[i]->getType() << "]";
	std::cout << std::endl;
}
