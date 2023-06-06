/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:29:46 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/06 21:29:46 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

static void	printBlueLine(std::string str)
{
	std::cout  << std::endl << "\033[0;94m" << str
				<< "\033[0;39m" << std::endl;
}

int main(void)
{
	printBlueLine("---------------------------------------------");
	printBlueLine("--------------- MANDATORY PART --------------");
	printBlueLine("---------------------------------------------");
	IMateriaSource* src = new MateriaSource();

	printBlueLine("---------------------------------------------");
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	printBlueLine("---------------------------------------------");
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	printBlueLine("---------------------------------------------");
	ICharacter* bob = new Character("bob");

	printBlueLine("---------------------------------------------");
	me->use(0, *bob);
	me->use(1, *bob);

	// printBlueLine("-------------------- extra 1 -------------------------");
	// int j = -1;
	// while (++j < 30)
	// {
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// }
	// printBlueLine("-------------------- extra 2 -------------------------");
	// me->unequip(1);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);

	// printBlueLine("-------------------- extra 3 -------------------------");
	// ICharacter* me2;
	// me2 = me;
	// me2->use(0,*me);

	printBlueLine("---------------------------------------------");
	delete bob;
	delete me;
	delete src;

	printBlueLine("---------------------------------------------");
	return (0);
}
