#include<iostream>
using namespace std;

void validateMark(int);

int main()
{
	int x;
	cout << "Enter a number:";
	cin >> x;
	if (validateMark(int) == 100)
		cout << "invalid marks.\n";
	else
		cout << "thank u.\n";
	return 0;
}

void validateMark(int)
{
	if (num >= 0 && num <= 100)
		return 1;
	else return 0;

}
