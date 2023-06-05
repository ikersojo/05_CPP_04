#ifndef MATERIASOURCE_HPP
	#define MATERIASOURCE_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>
	#include <string>
	#include "../inc/AMateria.hpp"
	#include "../inc/IMateriaSource.hpp"

	class MateriaSource : public IMateriaSource
	{
		public:
			// Constructors
			MateriaSource(void);
			MateriaSource(const MateriaSource& obj);

			// Destructor
			~MateriaSource();

			// Operator overload:
			MateriaSource&	operator=(const MateriaSource& rhs);

			// Instance Public Member Functions:
			void		learnMateria(AMateria* m);
			AMateria*	createMateria(const std::string& type);
			void		printKnownMateria(void);

		protected:
			// Instance attributes:
			AMateria*	_knownMateria[4];
	};

#endif // MATERIASOURCE_HPP
