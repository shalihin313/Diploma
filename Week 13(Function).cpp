#include<iostream>
using namespace std;

void moonweigth(double weight);

int main()
{
	double weight;
	cout << "\n How many kilos do you weight?";
	cin >> weight;

	moonweigth(weight);
	return 0;
}

void moonweight(double weight)
{
	weight = weight / 0.6;

	cout << "You weight" << weight << "kilos on the moon\n";
	return;
}

	