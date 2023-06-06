/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:27:16 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/06 21:27:17 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
	#define DOG_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include "../inc/Animal.hpp"
	#include "../inc/Brain.hpp"

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
			void		addIdea(std::string idea);
			void		printAllIdeas(void);

		private:
			Brain*	_dogBrain;
	};

	// Stream operator overload to print Dog Class instances:
	std::ostream& operator<<(std::ostream& os, const Dog& instance);

#endif // DOG_HPP
