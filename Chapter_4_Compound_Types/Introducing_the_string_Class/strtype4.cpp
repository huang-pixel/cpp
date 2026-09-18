// strtype4.cpp -- line input
// the contents of an uninitialized array are undefined
// strlen() function works by starting at the first element of the array and counting bytes until it reaches a null character
// the first null character appears in uninitialized data is essentially random
#include <iostream>
#include <string>
#include <cstring>

int main ()
{
    using namespace std;
	char charr[20];
	string str;

	cout << "Length of string in charr before input: "
		 << strlen(charr) << endl;
	cout << "Length of string in str before input: "
		 << str.size() << endl;
	cout << "Enter a line of text:\n";
	cin.getline(charr, 20); // indicate maximum length
	cout << "You entered: " << charr << endl;
	cout << "Enter another line of text:\n";
	getline(cin, str); // cin now an argument; no length specifier
	cout << "You entered: " << str << endl;
	cout << "Length of string in charr after input: "
		 << strlen(charr) << endl;
	cout << "Length of string in str after input: "
		 << str.size() << endl;
	return 0;
}