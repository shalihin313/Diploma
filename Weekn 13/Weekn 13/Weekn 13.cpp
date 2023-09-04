#include<iostream>
using namespace std;

void laugh(int num);

int main()
{
	int x;
	cout << "Enter a Number";
	cin >> x;
	cout << "Laugh out loud" << x << "times.\n";
	laugh(x);
	return 0;
}
void laugh(int num)
{
	for (int i = 0;i <num;i++)
		cout << "LOL\n";
	return;
}

