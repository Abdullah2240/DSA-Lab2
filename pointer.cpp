#include <iostream>
using namespace std;

void analyze_pointer(int* ptr);

int main(void) {
	int a = 9;
	int* loc = &a;
	analyze_pointer(loc);


	int* b = new int(8);
 	analyze_pointer(b);


	cout << endl;
	return 0;
}

void analyze_pointer(int* ptr) {
	cout << "The memory location the pointer is pointing to is: " << ptr << endl;
	cout << "The value of the memory at the point is: " << *ptr << endl;
}