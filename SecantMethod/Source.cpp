#include<iostream>
using namespace std;

double calcFX(double x) {
	return ((x * x * x) - (9 * x) + 1);
}

int main() {
	cout << "i\t\t\txi" << endl;

	double x0 = 3, x1 = 4;

	double x = 0.0;

	int count = 0;
	cout << count << "\t\t\t" << x0 << endl;
	count++;
	cout << count << "\t\t\t" << x1 << endl;
	while (1) {
		x = ((x0 * calcFX(x1)) - (x1 * calcFX(x0))) / (calcFX(x1) - calcFX(x0));
		if (x1 == x) break;
		x0 = x1;
		x1 = x;
		count++;
		cout << count << "\t\t\t" << x << endl;
	}

	system("pause");
	return 0;
}