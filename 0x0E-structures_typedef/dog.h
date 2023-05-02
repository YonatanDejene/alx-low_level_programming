#ifndef DOG
#define DOG

/**
* struct dog - Class
*
* @name: Name
*
* @age: Age
*
* @owner: Owner
*/


struct dog
{
	char *name;
	float age;
	char *owner;
};

dog_t *new_dog(char *name, float age, char *owner);


void free_dog(dog_t *d);

void print_dog(struct dog *d);


typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
