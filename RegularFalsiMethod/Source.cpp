#include <iostream>
using namespace std;


double calcFX(double x) {
	return (x * x * x) - (9 * x) + 1;
}

int main()
{
	cout << "a\t\tb\t\tf(a)\t\tf(b)\t\tc\t\tf(c)\t\tupdate" << endl;
	double a = 2, b = 4;
	double c = 0.0;
	int count = 0;

	while (1) {
		if (count > 5) break;

		c = ((a * calcFX(b)) - (b * calcFX(a))) / (calcFX(b) - calcFX(a));
		cout << a << "\t\t" << b << "\t\t" << calcFX(a) << "\t\t" << calcFX(b) << "\t\t" << c << "\t\t" << calcFX(c) << "\t\ta = c" << endl;
		count++;
		a = c;
	}
	
	system("pause");
	return 0;
}