/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:27:08 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/06 21:27:08 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
	#define ANIMAL_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>
	#include <string>

	class Animal
	{
		public:
			// Constructors
			Animal(void);
			Animal(const Animal& obj);

			// Destructor
			virtual ~Animal(void);

			// Operator overload:
			Animal&			operator=(const Animal& rhs);

			// Instance Public Member Functions:
			std::string		getType(void) const;
			void			setType(std::string type);

			void virtual	makeSound(void) const;

		protected:
			// Instance attributes:
			std::string	_type;
	};

	// Stream operator overload to print Animal Class instances:
	std::ostream& operator<<(std::ostream& os, const Animal& instance);

#endif // ANIMAL_HPP
