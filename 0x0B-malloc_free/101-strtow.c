#include <stdlib.h>
#include <string.h>

char **strtow(char *str)
{
     int letters = 0, index = 0, i = 0, j = 0;
    if (str == NULL || *str == '\0')
    {
        return NULL;
    }

    int words = 0;
    for (i = 0; str[i]; i++) {
        if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ')
        {
            words++;
        }
    }

    char **arr = malloc((words + 1) * sizeof(char *));
    if (arr == NULL)
    {
        return NULL;
    }

    for (i = 0; i < words; i++)
    {
        while (str[index] == ' ')
        {
            index++;
        }

          letters = 0;
        while (str[index + letters] != ' ' && str[index + letters])
        {
            letters++;
        }

        arr[i] = malloc((letters + 1) * sizeof(char));
        if (arr[i] == NULL)
        {
            for (j = 0; j < i; j++) {
               free(arr[j]);
            }
            free(arr);
            return NULL;
        }

        for (j = 0; j < letters; j++)
        {
          arr[i][j] = str[index + j];
        }
        arr[i][letters] = '\0';

        index += letters;
    }
    arr[words] = NULL;

    return arr;
}