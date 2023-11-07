#include "dog.h"
#include <stdlib.h>

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
