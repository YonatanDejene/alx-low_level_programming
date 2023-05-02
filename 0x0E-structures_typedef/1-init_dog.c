#include "dog.h"


/**
* init_dog -Iinitialize
* @d: Pointer.
* @name: Pointer -> Name.
* @age: Age.
* @owner: pointer to owner of dog
*
* Return: Nothing.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
