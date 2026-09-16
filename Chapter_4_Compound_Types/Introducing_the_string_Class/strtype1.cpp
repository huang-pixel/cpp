// strtype1.cpp -- using the C++ string class
// use a string object in the same manner as a character array
// initialize a string object to a C-style string
// use cin to store keyboard input in a string object
// use cout to display a string object
// use array notation to access individual characters stored in a string object
#include <iostream>
#include <string>  // make string class available

int main ()
{
    using namespace std;
    char charr1[20]; // create an empty array
    char charr2[20] = "jaguar"; // create an initialized array
    string str1; // create an empty string object
    string str2 = "panther"; // create an initialized string

    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2 // use cout for output
         << endl;
    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl; // use array notation
    return 0;
}