/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:28:38 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/06 21:28:39 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
	#define MATERIASOURCE_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>
	#include <string>
	#include "../inc/AMateria.hpp"
	#include "../inc/IMateriaSource.hpp"

	class MateriaSource : public IMateriaSource
	{
		public:
			// Constructors
			MateriaSource(void);
			MateriaSource(const MateriaSource& obj);

			// Destructor
			~MateriaSource();

			// Operator overload:
			MateriaSource&	operator=(const MateriaSource& rhs);

			// Instance Public Member Functions:
			void		learnMateria(AMateria* m);
			AMateria*	createMateria(const std::string& type);
			void		printKnownMateria(void);

		protected:
			// Instance attributes:
			AMateria*	_knownMateria[4];
	};

#endif // MATERIASOURCE_HPP
