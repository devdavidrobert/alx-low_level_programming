#include <stdlib.h>
#include "dog.h"

/**
 * _copy - Copies a string to a new dynamically allocated memory.
 * @src: Source string to copy.
 *
 * Return: A pointer to the new copy of the string, or NULL if memory allocation fails.
 *
 * Description: This function copies the content of the source string @src to a new
 * dynamically allocated memory. It is the responsibility of the caller to free
 * the memory allocated by this function.
 */
char *_copy(char *src)
{
	char *ptr;
	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}

	for (len = 0; src[len] != '\0'; len++)
		;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}

	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog - Creates a new dog structure and initializes its fields.
 * @name: Name of the new dog.
 * @age: Age of the new dog.
 * @owner: Owner of the new dog.
 *
 * Return: A pointer to the newly created dog structure, or NULL if memory allocation fails.
 *
 * Description: This function creates a new dog structure, initializes its fields with
 * the provided @name, @age, and @owner, and returns a pointer to the new structure. If
 * any memory allocation fails, it returns NULL. The caller is responsible for freeing
 * the memory allocated by this function.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoopie;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	snoopie = malloc(sizeof(dog_t));
	if (snoopie == NULL)
	{
		return (NULL);
	}

	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(snoopie);
		return (NULL);
	}
	(*snoopie).name = new_name;

	(*snoopie).age = age;

	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*snoopie).name);
		free(snoopie);
		return (NULL);
	}
	(*snoopie).owner = new_owner;

	return (snoopie);
}

