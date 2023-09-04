#include <iostream>
#include <cmath>
using namespace std;

float avg_Temp(const float temperature[], int size) {
	float sum = 0;
	for (int i = 0; i < size; i++) {
		sum += temperature[i];
	}
	return sum / size;
}

void display(const float temperature[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Temperature reading : " << temperature[i];
	}
}int main() {
	const int SIZE = 5;
	float temperature[SIZE];
	int i;
	// Read temperature values into the array
	for (i = 0; i < SIZE; i++) {
		cout << "Enter temperature reading : ";
		cin >> temperature[i];
	}
	// Display all temperature readings
	display(temperature, SIZE);
	// Display average temperature
	cout << "The average temperature is: " << avg_Temp(temperature, SIZE) << endl;
	return 0;
}



