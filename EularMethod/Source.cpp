#include<iostream>
using namespace std;

int main() {
	cout << "n\t\txn\t\tyn\t\tyn+1" << endl;
	double y = 0.0;
	double x = 1.0;
	double h = 0.1;

	double yupdated = 0.0;

	double value = 1.5;

	int count = 0;

	while (1) {
		if (x > value) break;
		yupdated = y + (h * (x + (y * y)));

		cout << count << "\t\t" << x << "\t\t" << y << "\t\t" << yupdated << endl;

		count++;
		x += h;
		y = yupdated;
	}

	system("pause");
	return 0;
}