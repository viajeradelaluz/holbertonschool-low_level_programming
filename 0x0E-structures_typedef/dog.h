#ifndef DOG_H
#define DOG_H
/**
 * struct dog - ID for dogs.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
