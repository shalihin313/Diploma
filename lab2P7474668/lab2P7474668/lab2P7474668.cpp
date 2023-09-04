#include <iostream>
#include <cmath>
using namespace std;

void getReading(double dataReading[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter reading " << i + 1 << ":";
		cin >> dataReading[i];
	}
}

double prodPos(double dataReading[], int size) {
	double product = 1;
	for (int i = 0; i < size; i++) {
		if (dataReading[i] > 0) product *= dataReading[i];
	}
	return product;
}

int main() {
	const int SIZE = 6;
	double dataReading[SIZE];

	getReading(dataReading, SIZE);

	cout << endl << "You have entered the following readings:" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << dataReading[i] << ", ";
		if ((i + 1) % 3 == 0) cout << endl;
	}

	double product = prodPos(dataReading, SIZE);
	cout << endl << "Product of positive values is: " << product << endl;

	return 0;
}



