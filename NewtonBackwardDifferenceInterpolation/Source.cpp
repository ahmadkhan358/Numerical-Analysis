#include<iostream>
using namespace std;

double p_cal(double p, int iterations) {
	double temp = p;
	for (int i = 1; i < iterations; i++) {
		temp = temp * (p + i);
	}
	return temp;
}

int factorial(int number) {
	int temp = 1;
	for (int i = 1; i <= number; i++) {
		temp = temp * i;
	}
	return temp;
}

int main() {	

	int n = 8;
	int x[] = { 1,2,3,4,5,6,7,8 };


	int y[8][8];

	y[0][0] = 1;
	y[1][0] = 8;
	y[2][0] = 27;
	y[3][0] = 64;
	y[4][0] = 125;
	y[5][0] = 216;
	y[6][0] = 343;
	y[7][0] = 512;

	

	for (int i = 1; i < n; i++) {
		for (int j = i; j < n; j++) {
			y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
		}
	}

	for (int i = 0; i < n; i++) {
		cout << x[i] << "\t";
		for (int j = 0; j < n; j++) {
			if (i == j || i > j) {
				cout << y[i][j] << "\t";
			}
		}
		cout << endl;
	}

	double value = 9;

	double h = (double)x[n - 1] - (double)x[n - 2];

	double p = (value - x[n-1])/h ;

	double sum = y[n - 1][0];

	for (int i = 1; i < n; i++) {
		sum = sum + (p_cal(p, i) * y[n - 1][i]) / factorial(i);
	}

	cout << "Value at " << value << " is " << sum << endl;


	system("pause");
	return 0;
}