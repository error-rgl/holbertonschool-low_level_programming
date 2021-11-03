#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog.
 *
 * @name: pointer to a char for name of dog.
 * @age: age of dog.
 * @owner: pointer to a cahr for owner of dog.
 *
 * Return: pointer to a new dog of type dog_t.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
	{
		return (NULL);
	}
	/*mydog->name = malloc(sizeof(name)) cant de bit de cadena*/
	mydog->name = malloc(strlen(name) + 1);
	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}
	mydog->owner = malloc(strlen(owner) + 1);
	if (mydog->owner == NULL)
	{
		free(mydog);
		free(mydog->name);
		return (NULL);
	}
	mydog->age = age;
	strncpy(mydog->name, name);
	strncpy(mydog->owner, owner);
	return (mydog);

}
