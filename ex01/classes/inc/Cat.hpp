#ifndef CAT_HPP
	#define CAT_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include "../inc/Animal.hpp"
	#include "../inc/Brain.hpp"

	class Cat : public Animal
	{
		public:
			// Constructors
			Cat(void);
			Cat(const Cat& obj);

			// Destructor
			~Cat(void);

			// Operator overload:
			Cat&		operator=(const Cat& rhs);

			// Instance Public Member Functions:
			void		makeSound(void) const;

		private:
			Brain*	_catBrain;
	};

	// Stream operator overload to print Cat Class instances:
	std::ostream& operator<<(std::ostream& os, const Cat& instance);

#endif // CAT_HPP
