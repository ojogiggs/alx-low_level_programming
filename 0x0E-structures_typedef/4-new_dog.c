#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - prints length of string of array
 * @s: character to be inputed
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * *_strcpy - prints an array with size given
 * @src: character to be inputed
 * @dest: other character to be inputted
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	/*go through loop and copy string to pointer*/
	for (len = 0; *(src + len) != '\0'; len++)
	{
		dest[len] = *(src + len);
	}
	dest[len] = '\0';
	return (dest);
}
/**
 * new_dog - stores new values in members
 * @name: pointer to string
 * @age: float
 * @owner: pointer to string
 * Return: ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*declare pointer to be used*/
	int len1, len2;
	dog_t *ptr;
	/*allocating space for the pointer*/
	ptr = (dog_t *)malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*get length of both strings*/
	len1 = _strlen(name);
	len2 = _strlen(owner);
	/*malloc memory for both strings because they're pointer to strings*/
	ptr->name = (char *)malloc(sizeof(char) * (len1 + 1));/*added 1 bcos of \0*/
	if (ptr->name == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}
	ptr->owner = (char *)malloc(sizeof(char) * (len2 + 1));/*added 1 bcos of \0*/
	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);/*freeing accordingly, if one malloc fails the rest fails*/
		free(ptr->owner);
		return (NULL);
	}
	/*copy the strings to the malloc spaces created*/
	_strcpy(ptr->name, name);
	ptr->age = age;
	_strcpy(ptr->owner, owner);
	return (ptr);
}
