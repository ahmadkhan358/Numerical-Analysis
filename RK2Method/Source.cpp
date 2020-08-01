#include<iostream>
using namespace std;

int main() {
	cout << "n\t\txn\t\tyn\t\tk1\t\tk2\t\tyn+1" << endl;
	double x = 0.0;
	double y = 1.0;
	double h = 0.1;
	double yupdated = 0.0;

	double k1 = 0.0, k2 = 0.0;

	int count = 0;

	double value = 0.3;

	while (1) {
		if (x > value) break;

		k1 = round(((-2) * x * (y * y))*10000)/10000;
		k2 = round(((-2) * ((x + h) * ((y * y) + (k1))))*10000)/10000;

		yupdated = round((y + (h * (k1 + k2)) / 2)*10000)/10000;

		cout << count << "\t\t" << x << "\t\t" << y << "\t\t" << k1 << "\t\t" << k2 << "\t\t" << yupdated << endl;

		y = yupdated;
		x += h;
		count++;
	}

	system("pause");
	return 0;
}