#include "dog.h"
#include <stdlib.h>

/**
* _strlen - return length of a string
* @s: string
* Return: length
*/

int	_strlen(char *s)
{
int	length = 0;

while (s[length] != '\0')
	length++;
return (length);
}

/**
* *_strcpy - copies string to dest
* @dest: copied string
* @src: string to copy
* Return: dest
*/

char	*_strcpy(char *dest, char *src)
{
int	i;

i = 0;
while (src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}
dest[i] = '\0';
return (dest);
}

/**
* new_dog - creates a new dog
* @name: name of dog.
* @age: age of dog.
* @owner: owner of dog.
* Return: NULL if fail.
*/

dog_t	*new_dog(char *name, float age, char *owner)
{
dog_t	*new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
	return (NULL);
new_dog->name = malloc(_strlen(name) + 1);
if (new_dog->name == NULL)
{
	free(new_dog);
	return (NULL);
}
_strcpy(new_dog->name, name);
new_dog->owner = malloc(_strlen(owner) + 1);
if (new_dog->owner == NULL)
{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
}
_strcpy(new_dog->owner, owner);
new_dog->age = age;
return (new_dog);
}
