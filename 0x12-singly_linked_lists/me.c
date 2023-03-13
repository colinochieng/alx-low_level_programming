#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * _strlen_ - String length
 *
 * @s: The string to be measured
 *
 * Return: The length of @s
 */
unsigned int _strlen_(const char *s)
{
	unsigned int l;

	l = 0;
	while (s && s[l])
		++l;
	return (l);
}

/**
 * _strdup_ - Duplicates a string
 *
 * @str: The string to be duplicated
 *
 * Return: The ducplicated string
 */
char *_strdup_(const char *str)
{
	char *s;
	int len;

	len = _strlen_(str);
	s = malloc(sizeof(*s) * (len + 1));
	if (!s)
		return (NULL);
	while (len >= 0)
	{
		s[len] = str[len];
		--len;
	}
	return (s);
}

/**
 * _create_list - Create a list
 *
 * @n: Number of elements
 *
 * Return: A pointer to the first element of the created list
 */
list_t *_create_list(unsigned int n, ...)
{
	va_list args;
	list_t *list;
	list_t *tmp;
	list_t *prev;
	unsigned int i;
	char *str;

	va_start(args, n);
	prev = tmp = list = NULL;
	i = 0;
	while (i < n)
	{
		str = va_arg(args, char *);
		tmp = malloc(sizeof(*tmp));
		if (!tmp)
			return (NULL);
		tmp->str = _strdup_(str);
		tmp->len = _strlen_(str);
		tmp->next = NULL;
		if (!list)
			list = tmp;
		if (prev)
			prev->next = tmp;
		prev = tmp;
		++i;
	}
	va_end(args);
	return (list);
}

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	size_t n;

	head = _create_list(2, "Best", "School");
	free(head->str);
	head->str = NULL;
	head->len = 0;
	n = print_list(head);
	printf("-> %lu elements\n", n);
	free_list(head);
	return (0);
}
