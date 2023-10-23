#include "main.h"
/**
* remove_duplicates - removes duplicate characters from a string
* @str: string to remove duplicates from
*
* Return: void
*/
void remove_duplicates(char *str)
{
	int len = strlen(str);

	if (len < 2)
	{
		return;
	}
	int tail = 1;

	for (int i = 1; i < len; i++)

	{

		int j;

		for (j = 0; j < tail; j++)
		{
			if (str[i] == str[j])
			{
				break;
			}
		}
		if (j == tail)
		{
			str[tail] = str[i];
			tail++;
		}
	}
	str[tail] = '\0';
}
