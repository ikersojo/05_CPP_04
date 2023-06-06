/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:28:21 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/06 21:28:22 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
	#define CHARACTER_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>
	#include <string>
	#include "../inc/AMateria.hpp"
	#include "../inc/ICharacter.hpp"
	#include "../inc/Cure.hpp"
	#include "../inc/Ice.hpp"

	class Character : public ICharacter
	{
		public:
			// Constructors
			Character(void);
			Character(const std::string name);
			Character(const Character& obj);

			// Destructor
			~Character(void);

			// Operator overload:
			Character&	operator=(const Character& rhs);

			// Instance Public Member Functions:
			const std::string&	getName() const;
			void				equip(AMateria* m);
			void				unequip(int idx);
			void				use(int idx, ICharacter& target);
			void				printInventory(void);
			void				printFloor(void);

		protected:
			// Instance attributes:
			std::string		_name;
			AMateria*		_inventorySlot[4];
			AMateria*		_floor[20];
	};

	// Stream operator overload to print AMateria Class instances:
	std::ostream& operator<<(std::ostream& os, const Character& instance);

#endif // CHARACTER_HPP
