#include <iostream>
using namespace std;
int main()
{
	char grade;
	cout << "\nEnter your Grade:";
	cin >> grade; //"cin" --> blinking dot in the cmd//
	switch (grade)
	{
	case 'A':
	case 'a': cout << "Excellent\n";
		break;
	case 'B':
	case 'b': cout << "Good\n";
		break;
	case 'C': 
	case 'c':cout << "Satisfactory\n";
		break;
	case 'D': 
	case 'd':cout << "Poor\n";
		break;
	case 'E':
	case 'e': cout << "Fail\n";
		break;
	default:cout << "Invalid input\n";
		break;
	}
	return 0;
}