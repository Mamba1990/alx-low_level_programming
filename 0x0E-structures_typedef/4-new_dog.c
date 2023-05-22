#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; length++)
	{
	s++;
	}
	return (length);
}

/**
* char *_strcpy - copies the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; i < l ; i++)
	{
	dest[i] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * (l1 + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
