#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog
 * @name: passs value stores in name
 * @age: pass dogs age
 * @owner: pass details of the owner
 * Desc: header
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);

#endif
