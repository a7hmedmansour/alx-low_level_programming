#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
*new_dog- a function that creates a new dog
*@name : dog name
*@age: dog age
*@owner : dog owner name
*Return: pointer to new dog struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *N_dog;

int len, len_;

len = strlen(name);
len_ = strlen(owner);

N_dog = malloc(sizeof(dog_t));

if (N_dog == NULL)
return (NULL);

N_dog->name = malloc(sizeof(char) * (len + 1));
N_dog->owner = malloc(sizeof(char) * (len_ + 1));

if (N_dog->name == NULL)
{
free(N_dog);
return (NULL);
}
if (N_dog->owner == NULL)
{
free(N_dog);
free(N_dog->name);
return (NULL);
}
strcpy(N_dog->name, name);
strcpy(N_dog->owner, owner);
N_dog->age = age;
return (N_dog);
}
