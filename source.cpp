//Made by a student for helping to solve a system of two linear equations
#include <iostream>
using namespace std;
int main() {
	cout << "a1*x + b1*y = c1" << endl;
	cout << "a2*x + b2*y = c2" << endl;
	double a1, b1, c1, a2, b2, c2;
	cout << "Enter coefficients for the first equation (a1 b1 c1): ";
	cin >> a1 >> b1 >> c1;
	cout << "Enter coefficients for the second equation (a2 b2 c2): ";
	cin >> a2 >> b2 >> c2;
	double determinant = a1 * b2 - a2 * b1;
	if (determinant == 0) {
		cout << "The system has no unique solution." << endl;
	}
	else {
		double x = (c1 * b2 - c2 * b1) / determinant;
		double y = (a1 * c2 - a2 * c1) / determinant;
		cout << "The solution is: x = " << x << ", y = " << y << endl;
	}
	return 0;
}