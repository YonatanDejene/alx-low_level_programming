#include "dog.h"
#include <stdlib.h>

/**
* new_dog - Create a dog.
* @name: Name for the dog created.
* @age: Age of the  dog created.
* @owner: Owner of the dog created.
*
* Return: pointer.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n, o, j;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	n++;
	dog->name = malloc(n * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (j = 0; j < n; j++)
		dog->name[j] = name[j];
	dog->age = age;
	for (o = 0; owner[o]; o++)
		;
	o++;
	dog->owner = malloc(o * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (j = 0; j < o; j++)
		dog->owner[j] = owner[j];
	return (dog);
}
