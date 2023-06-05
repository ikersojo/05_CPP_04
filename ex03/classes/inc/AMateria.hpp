#ifndef AMATERIA_HPP
	#define AMATERIA_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>
	#include <string>
	#include "../inc/ICharacter.hpp"

	class ICharacter;

	class AMateria
	{
		public:
			// Constructors
			AMateria(void);
			AMateria(const std::string& type);
			AMateria(const AMateria& obj);

			// Destructor
			virtual ~AMateria(void);

			// Operator overload:
			AMateria&			operator=(const AMateria& rhs);

			// Instance Public Member Functions:
			const std::string&	getType() const; //Returns the materia type
			virtual AMateria*	clone() const = 0;
			virtual void		use(ICharacter& target);

		protected:
			// Instance attributes:
			std::string	_type;
	};

	// Stream operator overload to print AMateria Class instances:
	std::ostream& operator<<(std::ostream& os, const AMateria& instance);

#endif // AMATERIA_HPP
