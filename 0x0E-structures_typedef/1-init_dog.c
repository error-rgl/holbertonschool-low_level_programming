#include <stdlib.h>

/**
 * init_dog - declare a variable of type struct dog
 * @d: pointer.
 * @name: pointer to a char for name of dog.
 * @age: age of dog.
 * @owner: pointer to a char for owner of dog.
 *
 * Return: no return.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
		;
	else
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
