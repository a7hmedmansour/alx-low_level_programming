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
unsigned int i = 0, j = 0;
int len, len_;
len = strlen(name);
len_ = strlen(owner);

N_dog = malloc(sizeof(dog_t));

if (N_dog == NULL)
return (NULL);

N_dog->name = malloc(sizeof(char) * (len + 1));
while (name[i] != '\0' && N_dog->name)
{
N_dog->name[i] = name[i];
i++;
}
N_dog->owner = malloc(sizeof(char) * (len_ + 1));
while (owner[j] != '\0' && N_dog->owner)
{
N_dog->owner[j] = owner[j];
j++;
}
if (!N_dog->name || !N_dog->owner)
{
free(N_dog);
free(N_dog->name);
free(N_dog->owner);
return (NULL);
}
N_dog->age = age;

return (N_dog);
}
