#include<iostream>
using namespace std;

int factorial(int number) {
	int temp = 1.0;
	for (int i = 1; i <= number; i++) {
		temp = temp * i;
	}
	return temp;
}

double geth(int iterations, double value) {
	double temp = 1.0;
	for (int i = 0; i < iterations; i++) {
		temp = temp * value;
	}

	return temp;
}

int main() {

	cout << "n\t\tx\t\ty" << endl;

	float y = 1, x = 0;

	float value = 0.3;

	float h = 0.1;

	float dy1 = -2 * x * y * y;

	float dy2 = (8 * x * x * y * y * y) - (2 * y * y);

	int count = 0;
	while (1) {
		cout << count << "\t\t" << x << "\t\t" << y << endl;
		count++;
		if (x == value) break;

		x += h;

		y = round((y + geth(count, h) * (dy1)+(geth(count + 1, h) * (dy2)) / factorial(count)) * 10000) / 10000;
	}

	system("pause");
	return 0;
}