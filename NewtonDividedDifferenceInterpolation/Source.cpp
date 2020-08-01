#include<iostream>
using namespace std;

double calc_product(int iterations, int x, int a[]) {
	double temp = 1.0;
	for (int i = 0; i < iterations - 1; i++) {
		temp = temp * ((double)x - (double)a[i]);
	}
	return temp;
}


int main() {

	int x[] = { 1,2,5 };

	const int n = sizeof(x) / sizeof(x[0]);

	double y[n][n];

	y[0][0] = 1.0;
	y[1][0] = 4.0;
	y[2][0] = 10.0;

	for (int i = 1; i < n; i++) {
		for (int j = i; j < n; j++) {
			y[j][i] = (round(y[j][i - 1] * 1000) / 1000 - round(y[j - 1][i - 1] * 1000) / 1000) / ((double)x[j] - (double)x[j - i]);
		}
	}

	for (int i = 0; i < n; i++) {
		cout << x[i] << "\t\t";
		for (int j = 0; j < n; j++) {
			if (j > i) {
				break;
			}
			cout << y[i][j] << "\t\t";
		}
		cout << endl;
	}


	int value = 3;

	double fx = 0.0;

	for (int i = 0; i < n; i++) {
		fx = fx + (y[i][i] * calc_product(n, value, x));
	}

	cout << "The value at " << value << " is : " << fx << endl;

	system("pause");
	return 0;
}