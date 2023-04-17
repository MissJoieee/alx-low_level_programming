#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - attributes of a dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: dog attributes
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typdef for dog stucture
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *nam, float age, char *owner);
void free_dog(dog_t *d);
#endif
