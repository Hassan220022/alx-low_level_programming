#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Return: pointer to struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
     if (d == NULL)
     {
          return;
     }
     d->name = name;
     d->age = age;
     d->owner = owner;

     if (d->name == NULL && d->owner == NULL && d->age == 0)
     {
          return;
     }
     else
     {
        return (d);  
     }
}
