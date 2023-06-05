#include "../inc/main.hpp"

static void	printBlueLine(std::string str)
{
	std::cout  << std::endl << "\033[0;94m" << str
				<< "\033[0;39m" << std::endl;
}

int main(void)
{
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

	printBlueLine("---------------------------------------------");
	delete bob;
	delete me;
	delete src;

	printBlueLine("---------------------------------------------");
	return (0);
}
