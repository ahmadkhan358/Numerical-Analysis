#include<iostream>
using namespace std;
int main() {

	cout << "n\t\txn\t\tf(x)\t\tf`(x)" << endl;

	double x = 1.0;
	double xupdated = 1.0;
	double fx, fxx;

	int count = 0;

	while (1) {
		if (count > 4) break;

		fx = (x * x * x) - 9 * x + 1;
		fxx = 3*(x * x) - 9;

		cout << count << "\t\t" << xupdated << "\t\t" << fx << "\t\t" << fxx << endl;

		xupdated = x - (fx / fxx);
		x = xupdated;
		count++;
	}

	system("pause");
	return 0;
}