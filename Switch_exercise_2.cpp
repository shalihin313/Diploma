#include <iostream>
using namespace std;
int main()
{
	char grade;
	cout << "\nEnter your Grade: ";
	cin >> grade; //"cin" --> blinking dot in the cmd//
	switch (grade)
	{
	case 'A': cout << "Excellent\n";
		break;
	case 'a': cout << "Excellent\n";
		break;
	case 'B': cout << "Good\n";
		break;
	case 'C': cout << "Satisfactory\n";
		break;
	case 'D': cout << "Poor\n";
		break;
	case 'E': cout << "Fail\n";
		break;
	default:cout << "Invalid input\n";
		break;
	}

	return 0;
}