#include <stdlib.h>
#include "Person.h"

Person* person_new (int age, int something)
{
    Person* this = malloc(sizeof(Person));
    if(this != NULL)
        initialize(this,age,something);

    return this;
}

static void initialize(Person* this, int age, int something)
{
    this->age = age;
    this->something = something;
}

void person_setAge(Person* this, int age)
{
    if(age > 0)
        this->age = age;
}

int person_getAge(Person* this)
{
    return this->age;
}

void person_free(Person * this) {
    // Do any other freeing required here.
    free(this);
}
