#include "main.h"

/**
* argstostr - concatenates all the arguments of your program
* @ac: argument count
* @av: pointer to array of pointers to arguments
*
* Return: pointer to new string, or NULL if error
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, len;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++, len++)
	{
		len += strlen(av[i]);
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++, k++, j = 0)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
		str[k] = '\n';
	}
	str[k] = '\0';
	return (str);
}
