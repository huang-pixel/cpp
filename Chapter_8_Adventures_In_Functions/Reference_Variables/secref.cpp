// secref.cpp -- defining and using a reference
#include <iostream>

int main()
{
    using namespace std;
    int rats = 101;
    int *pt = &rats;
    int & rodents = *pt; // rodents is a reference

    cout << "rats = " << rats << endl;
    cout << "*pt = " << *pt << endl;
    cout << "rodents = " << rodents << endl;

    cout << "rats address = " << &rats << endl;
    cout << "pt address = " << pt << endl;
    cout << "rodents address = " << &rodents << endl;

    int bunnies = 50;
    pt = &bunnies;
    rodents = bunnies; // can we change the reference?

    cout << "bunnies = " << bunnies << endl;
    cout << "*pt = " << *pt << endl;
    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;
    cout << "bunnies address = " << &bunnies << endl;
    cout << "pt address = " << pt << endl;
    cout << "rats address = " << &rats << endl;
    cout << "rodents address = " << &rodents << endl;
    return 0;
}