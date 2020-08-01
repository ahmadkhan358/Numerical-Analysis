#include<iostream>
using namespace std;

float getResultOfEquation(float x) {
	return (x * x * x) - (9 * x) + 1;
}

void bisect(float lx, float ux) {

	float c = 0.0;
	int iteration = 0;

	cout << "n\t\tx\t\tf(x)" << endl;


	if (getResultOfEquation(lx) * getResultOfEquation(ux) < 0) {
		cout << iteration << "\t\t" << lx << "\t\t" << getResultOfEquation(lx) << endl;
		iteration++;
		cout << iteration << "\t\t" << ux << "\t\t" << getResultOfEquation(ux) << endl;
		while (1) {
			iteration++;
			c = (lx + ux) / 2;
			if (getResultOfEquation(c) == 0.0) break;
			else if (getResultOfEquation(lx) * getResultOfEquation(c) < 0) ux = c;
			else lx = c;

			cout << iteration << "\t\t" << c << "\t\t" << getResultOfEquation(c) << endl;
		}
		cout << "The value of root is : " << c << endl;
	}
	else {
		cout << "Solution not possible" << endl;
	}
}

int main() {
	bisect(2.0, 4.0);
	system("pause");
	return 0;
}