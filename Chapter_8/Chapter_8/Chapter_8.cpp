#include <iostream>
using namespace std;

void choice() {
	if (choice == 1) {

		cout << "Enter value to shift Left";
		cin >> value;
}

void value(int) {

}
int main() 
{
	cout << "1.Shift left" << endl << "2.Shift Right";
	cin >> choice;
	choice();


	cout << "Please enter value";
	cin >> value;
}