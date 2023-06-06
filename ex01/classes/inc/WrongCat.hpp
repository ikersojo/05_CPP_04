/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:27:21 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/06 21:27:21 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
	#define WRONGCAT_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include "../inc/WrongAnimal.hpp"

	class WrongCat : public WrongAnimal
	{
		public:
			// Constructors
			WrongCat(void);
			WrongCat(const WrongCat& obj);

			// Destructor
			~WrongCat(void);

			// Operator overload:
			WrongCat&		operator=(const WrongCat& rhs);

			// Instance Public Member Functions:
			void		makeSound(void) const;
	};

	// Stream operator overload to print WrongCat Class instances:
	std::ostream& operator<<(std::ostream& os, const WrongCat& instance);

#endif // WRONGCAT_HPP
