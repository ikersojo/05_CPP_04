#ifndef ICHARACTER_HPP
	#define ICHARACTER_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>
	#include <string>
	#include "../inc/AMateria.hpp"

	class AMateria;

	class ICharacter
	{
		public:
			// Destructor
			virtual ~ICharacter(void);

			// Instance Public Member Functions:
			virtual const std::string&	getName() const = 0;
			virtual void				equip(AMateria* m) = 0;
			virtual void				unequip(int idx) = 0;
			virtual void				use(int idx, ICharacter& target) = 0;
	};

#endif // ICHARACTER_HPP
