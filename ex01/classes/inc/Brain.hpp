/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:27:11 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/06 21:27:11 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			void			addIdea(std::string idea);
			void			printAllIdeas(void);

		private:
			// Instance attributes:
			std::string		_ideas[MAXIDEAS];
			int				_maxIndex;
	};

#endif // BRAIN_HPP
