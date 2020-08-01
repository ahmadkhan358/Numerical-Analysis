#include<iostream>
using namespace std;

int main() {
	double xi = 0.0, yi = 0.0, zi = 0.0;
	double x, y, z;

	int iterations = 0;

	cout << "k\t\tx\t\ty\t\tz" << endl;
	cout << iterations << "\t\t" << xi << "\t\t" << yi << "\t\t" << zi << endl;

	while (iterations < 5) {
		iterations++;
		x = (95.0 / 83.0) - (11.0 / 83.0) * yi + (4.0 / 83.0) * zi;
		y = (104.0 / 52.0) - (7.0 / 52.0) * x - (13.0 / 52.0) * zi;
		z = (71.0 / 29.0) - (3.0 / 29.0) * x - (8.0 / 29.0) * y;

		xi = x;
		yi = y;
		zi = z;

		cout << iterations << "\t\t" << xi << "\t\t" << yi << "\t\t" << zi << endl;
	}

	system("pause");
	return 0;
}