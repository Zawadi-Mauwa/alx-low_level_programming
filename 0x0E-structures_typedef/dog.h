#ifndef DOG_H
#define DOG_H

 /**
 * struct dog - structure definition of a hrder file  dog 
 *
 * @name: 1st param and is a character string 
 *
 * @age: 2nd param and is an integer 
 *
 * @owner: 3rd param and is a character string 
 *
 */
typedef struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age,char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
