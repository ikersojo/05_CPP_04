#ifndef DOG_HPP
	#define DOG_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include "../inc/Animal.hpp"

	class Dog : public Animal
	{
		public:
			// Constructors
			Dog(void);
			Dog(const Dog& obj);

			// Destructor
			~Dog(void);

			// Operator overload:
			Dog&		operator=(const Dog& rhs);

			// Instance Public Member Functions:
			void		makeSound(void) const;
	};

	// Stream operator overload to print Dog Class instances:
	std::ostream& operator<<(std::ostream& os, const Dog& instance);

#endif // DOG_HPP
