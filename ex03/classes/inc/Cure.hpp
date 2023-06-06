/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:28:24 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/06 21:28:24 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
	#define CURE_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>
	#include <string>
	#include "../inc/ICharacter.hpp"
	#include "../inc/AMateria.hpp"

	class Cure : public AMateria
	{
		public:
			// Constructors
			Cure(void);
			Cure(const Cure& obj);

			// Destructor
			~Cure(void);

			// Operator overload:
			Cure&	operator=(const Cure& rhs);

			// Instance Public Member Functions:
			Cure*	clone() const;
			void	use(ICharacter& target);

		protected:
			// Instance attributes:
			std::string	_type;
	};

#endif // CURE_HPP
