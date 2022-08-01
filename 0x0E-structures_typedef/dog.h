#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Stores variables with information on a dog
 * Description: Define a new type struct dog with the following elements
 * @name: type = char *
 * @age: type = float
 * @owner: type = char *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */


typedef struct dog dog_t;




#endif
