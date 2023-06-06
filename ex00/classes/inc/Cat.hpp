/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:25:57 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/06 21:25:59 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
	#define CAT_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include "../inc/Animal.hpp"

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
	};

	// Stream operator overload to print Cat Class instances:
	std::ostream& operator<<(std::ostream& os, const Cat& instance);

#endif // CAT_HPP
