/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:28:47 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/06 21:28:47 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

// Constructors
/* ************************************************************************** */

Character::Character(void) : _name("undefined")
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default Character constructor called"
					<< "\033[0;39m" << std::endl;
	int	i = 0;
	while (i < 4)
		this->_inventorySlot[i++] = NULL;
	i = 0;
	while (i < 20)
		this->_floor[i++] = NULL;
}

Character::Character(const std::string name) : _name(name)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Character " << this->getName() << " constructor called"
					<< "\033[0;39m" << std::endl;
	int	i = 0;
	while (i < 4)
		this->_inventorySlot[i++] = NULL;
	i = 0;
	while (i < 20)
		this->_floor[i++] = NULL;
}

Character::Character(const Character& obj)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Character Copy constructor called"
					<< "\033[0;39m" << std::endl;
	*this = obj;
}

// Destructor
/* ************************************************************************** */

Character::~Character(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Character Destructor called (name = "
					<< this->getName() << ")" << "\033[0;39m" << std::endl;
	int	i = -1;
	while (++i < 4)
	{
		if (this->_inventorySlot[i] != NULL)
		{
			delete _inventorySlot[i];
			this->_inventorySlot[i] = NULL;
		}
	}
	i = -1;
	while (++i < 20)
	{
		if (this->_floor[i] != NULL)
		{
			delete _floor[i];
			this->_floor[i] = NULL;
		}
	}
}

// Operator overload:
/* ************************************************************************** */

Character&	Character::operator=(const Character& rhs)
{
	int			i;
	std::string	_tempInventorySlotNames;

	if (this != &rhs)
	{
		this->_name = rhs.getName();
		i = -1;
		while (++i < 4)
		{
			_tempInventorySlotNames = rhs._inventorySlot[i]->getType();
			delete rhs._inventorySlot[i];
			if (_tempInventorySlotNames == "ice")
				this->_inventorySlot[i] = new Ice();
			else if (_tempInventorySlotNames == "cure")
				this->_inventorySlot[i] = new Cure();
			else
				this->_inventorySlot[i] = NULL;
		}
		i = -1;
		while (++i < 20)
		{
			_tempInventorySlotNames = rhs._floor[i]->getType();
			delete rhs._floor[i];
			if (_tempInventorySlotNames == "ice")
				this->_floor[i] = new Ice();
			else if (_tempInventorySlotNames == "cure")
				this->_floor[i] = new Cure();
			else
				this->_floor[i] = NULL;
		}
	}
	return (*this);
}

// Instance Public Member Functions:
/* ************************************************************************** */

const std::string&	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (this->_inventorySlot[i] == NULL)
		{
			this->_inventorySlot[i] = m;
			std::cout << "\033[0;92m" << this->_inventorySlot[i]->getType() << " materia equiped in slot "
						<< i << "!" << "\033[0;39m" << std::endl;
			break;
		}
	}
	if (i == 4)
	{
		std::cout << "\033[0;31m" << "No empty slots!" << "\033[0;39m" << std::endl;
		i = -1;
		while (++i < 20)
		{
			if (this->_floor[i] == NULL)
			{
				this->_floor[i] = m;
				std::cout << "\033[0;31m" << "Materia left in the floor." << "\033[0;39m" << std::endl;
				break ;
			}
		}
		if (i == 20)
		{
			std::cout << "\033[0;31m" << "No room in the floor either. Materia destroyed" << "\033[0;39m" << std::endl;
			delete m;
		}
	}
}

void	Character::unequip(int idx)
{
	int	i;

	if (idx >= 0 && idx <= 3 && this->_inventorySlot[idx] != NULL)
	{
		i = -1;
		while (++i < 20)
		{
			if (this->_floor[i] == NULL)
			{
				this->_floor[i] = this->_inventorySlot[idx];
				this->_inventorySlot[idx] = NULL;
				std::cout << "\033[0;92m" << this->_inventorySlot[i]->getType() << " materia unequiped from slot "
						<< i << "." << "\033[0;39m" << std::endl;
				break ;
			}
		}
		if (i == 20)
		{
			std::cout << "\033[0;31m" << "No room on the floor. Cannot be unequiped! Materia destroyed!" << "\033[0;39m" << std::endl;
			delete this->_inventorySlot[idx];
			this->_inventorySlot[idx] = NULL;
		}
	}
	else
		std::cout << "\033[0;31m" << "Slot not equiped!" << "\033[0;39m" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && this->_inventorySlot[idx] != NULL)
	{
		this->_inventorySlot[idx]->use(target);
	}
	else
		std::cout << "\033[0;31m" << "Slot not equiped!" << "\033[0;39m"<< std::endl;
}

void	Character::printInventory(void)
{
	std::cout << "Inventory: ";
	int	i = -1;
	while (++i < 4)
		std::cout << "[" << this->_inventorySlot[i]->getType() << "]";
	std::cout << std::endl;
}

void	Character::printFloor(void)
{
	std::cout << "In the floor: ";
	int	i = -1;
	while (++i < 20)
	{
		if (this->_inventorySlot[i] != NULL)
			std::cout << "[" << this->_inventorySlot[i]->getType() << "]";
	}
	std::cout << std::endl;
}

// Stream operator overload to print Character Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const Character& instance)
{
	os << "Character (name = " << instance.getName() << ") ";
	return (os);
}
