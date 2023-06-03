#include "../inc/main.hpp"
#define ARRAY_SIZE 5


static void	printBlueLine(std::string str)
{
	std::cout  << std::endl << "\033[0;94m" << str
				<< "\033[0;39m" << std::endl;
}

int main(void)
{
	printBlueLine("---------------------------------------------");
	const Animal*	array[ARRAY_SIZE];

	printBlueLine("---------------------------------------------");
	int index = -1;
	while (++index < ARRAY_SIZE)
	{
		if (index % 2 == 0)
			array[index] = new Dog;
		else
			array[index] = new Cat;
			printBlueLine("-----------");
	}
	printBlueLine("---------------------------------------------");
	index = -1;
	while (++index < ARRAY_SIZE)
	{
		delete array[index];
		printBlueLine("-----------");
	}
	printBlueLine("---------------------------------------------");
	printBlueLine("---------------------------------------------");
	printBlueLine("---------------------------------------------");
	// const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	
	// printBlueLine("---------------------------------------------");
	// printBlueLine("meta = new Animal(); meta->getType()");
	// std::cout << meta->getType() << " " << std::endl;

	printBlueLine("j = new Dog(); j->getType()");
	std::cout << j->getType() << " " << std::endl;

	printBlueLine("i = new Cat(); i->getType()");
	std::cout << i->getType() << " " << std::endl;

	printBlueLine("making Cat sound...");
	i->makeSound();

	printBlueLine("making Dog sound...");
	j->makeSound();

	// printBlueLine("making Animal sound...");
	// meta->makeSound();

	printBlueLine("---------------------------------------------");
	const Animal*	cat1 = i;
	const Animal*	cat2 (i);

	std::cout << *i << std::endl;
	std::cout << *cat1 << std::endl;
	std::cout << *cat2 << std::endl;

	cat1->makeSound();
	cat2->makeSound();

	printBlueLine("---------------------------------------------");
	// delete meta;
	delete i;
	delete j;

	printBlueLine("---------------------------------------------");
	printBlueLine("---------------------------------------------");
	printBlueLine("---------------------------------------------");
	Dog	dog1;

	std::cout << dog1 << std::endl;
	dog1.makeSound();
	dog1.addIdea("I am a good dog!");
	dog1.addIdea("Yes.....");
	dog1.printAllIdeas();
	dog1.makeSound();
	printBlueLine("---------------------------------------------");
	return (0);
}
