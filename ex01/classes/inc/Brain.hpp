#ifndef BRAIN_HPP
	#define BRAIN_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <string>
	#include <iostream>
	#define MAXIDEAS 100

	class Brain
	{
		public:
			// Constructors
			Brain(void);
			Brain(const Brain& obj);

			// Destructor
			~Brain(void);

			// Operator overload:
			Brain&		operator=(const Brain& rhs);

			// Instance Public Member Functions:
			std::string		getIdea(int i) const;

		private:
			// Instance attributes:
			std::string		_ideas[MAXIDEAS];
	};

	// Stream operator overload to print Brain Class instances:
	std::ostream& operator<<(std::ostream& os, const Brain& instance);

#endif // BRAIN_HPP
