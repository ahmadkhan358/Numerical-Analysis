#include<iostream>
using namespace std;

int main() {
	cout << "n\txn\tyn\tk1\tk2\tk3\tk4\tyn+1" << endl;
	double x = 0.0;
	double y = 1.0;
	double h = 0.1;
	double yupdated = 0.0;

	double k1 = 0.0, k2 = 0.0, k3 = 0.0, k4 = 0.0;

	int count = 0;

	double value = 0.3;

	while (1) {
		if (x > value) break;

		k1 = (-2) * x * (y * y);
		k2 = (-2) * ((x + h / 2) * ((y * y) + (k1 / 2)));
		k3 = (-2) * ((x + h / 2) * ((y * y) + (k2 / 2)));
		k4 = (-2) * ((x + h) * ((y * y) + (k3)));


		yupdated = y + (h * (k1 + 2 * k2 + 2 * k3) + k4) / 6;

		cout << count << "\t" << x << "\t" << y << "\t" << k1 << "\t" << k2 << "\t" << k3 << "\t" << k4 << "\t" << yupdated << endl;

		y = yupdated;
		x += h;
		count++;
	}
	system("pause");
	return 0;
}