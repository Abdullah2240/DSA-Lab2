/*
Write a program that dynamically allocates memory for a string, takes input from the user, reverses the string, displays the reversed result, and finally frees the allocated memory.
You must also upload this program(string_reverse.cpp) to your GitHub repository.
*/

#include <iostream>
using namespace std;

char* reverse(char* a);

int main(void) {
	int length;
	cout << "Enter the length of the string: ";
	cin >> length;

	char *string = new char(length+1); // +1 for the null terminator
	cout << "Enter string of length " << length << ": ";
	cin >> string;

	cout << "inital String: " << string << endl;
	char* reversed  = reverse(string);

	cout << "Reversed string: " << reversed << endl;
}

char* reverse(char* a) {
	char temp;
	int length = strlen(a);
	for (int i = 0; i < length/2; i++)  {
		temp = a[i];
		a[i] = a[length - i - 1];
		a[length - i - 1] = temp;
	}
	return a;
}