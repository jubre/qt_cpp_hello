#include <iostream>
#include "test.h"
#include "cat.h"

using namespace std;

int main()
{
    SayHello();

    Cat myCat;

    myCat.setAge(31);

    cout << "Age of my Cat: " << myCat.getAge() << endl;

    return 0;
}
