/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:26:05 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/06 21:26:05 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
	#define WRONGANIMAL_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>
	#include <string>

	class WrongAnimal
	{
		public:
			// Constructors
			WrongAnimal(void);
			WrongAnimal(const WrongAnimal& obj);

			// Destructor
			virtual ~WrongAnimal(void);

			// Operator overload:
			WrongAnimal&	operator=(const WrongAnimal& rhs);

			// Instance Public Member Functions:
			std::string		getType(void) const;
			void			setType(std::string type);

			void	makeSound(void) const;

		protected:
			// Instance attributes:
			std::string	_type;
	};

	// Stream operator overload to print WrongAnimal Class instances:
	std::ostream& operator<<(std::ostream& os, const WrongAnimal& instance);

#endif // WRONGANIMAL_HPP
