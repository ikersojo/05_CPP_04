#ifndef IMATERIASOURCE_HPP
	#define IMATERIASOURCE_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>
	#include <string>
	#include "../inc/AMateria.hpp"

	class IMateriaSource
	{
		public:
			// Destructor
			virtual ~IMateriaSource();

			// Instance Public Member Functions:
			virtual void		learnMateria(AMateria*) = 0;
			virtual AMateria*	createMateria(const std::string& type) = 0;
	};

#endif // IMATERIASOURCE_HPP
