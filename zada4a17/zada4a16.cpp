#include <iostream>

using namespace std;

void printBMI(double BMI) {
	
	if (BMI >= 30.0) cout << "Obesity";
	else if (BMI >= 25.0) cout << "Over weight";
	else if (BMI >= 18.5) cout << "Normal weight";
	else if (BMI > 0) cout << "Total underweight";
}

double BMI(double m, double r) {
	double BMI,c;
	r /= 100;
	c = m / pow(r, 2);
	
	return c;
}

int main() {
	double r, m;
	cout << "BMI = ";
	cin >> m >> r;
	
	printBMI(BMI(m,r));
	
}

