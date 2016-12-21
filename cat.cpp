#include "cat.h"
#include <iostream>

using namespace std;

Cat::Cat()
{
    cout << "Constructor Cat" << endl;
}

int Cat::getAge()
{
    return age;
}

void Cat::setAge(int vAge)
{
    age = vAge;
}
