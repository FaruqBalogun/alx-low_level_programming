#ifndef DOG_H
#define DOG_H

/**
  * struct dog - A Dog's basic info
  * @name: The first member
  * @age: THe second member
  * @owner: The third member
  * Description: Longer description
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog_t - typedef for struct dog
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *des, char *src);
int _strlen(char *s);

#endif
