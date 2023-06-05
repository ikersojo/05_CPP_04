#ifndef ICE_HPP
	#define ICE_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>
	#include <string>
	#include "../inc/ICharacter.hpp"
	#include "../inc/AMateria.hpp"

	class Ice : public AMateria
	{
		public:
			// Constructors
			Ice(void);
			Ice(const Ice& obj);

			// Destructor
			~Ice(void);

			// Operator overload:
			Ice&	operator=(const Ice& rhs);

			// Instance Public Member Functions:
			Ice*	clone() const;
			void	use(ICharacter& target);

		protected:
			// Instance attributes:
			std::string	_type;
	};

#endif // ICE_HPP
