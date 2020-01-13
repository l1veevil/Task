#include <cmath>
#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");

	int a, x = 0, t = 0;

	cout << "Введите число" << endl;
	cin >> a;


	while (a > t) {
		t = pow(2, x);
		if (a < t) {
			break;
		}
		else {
			x++;
		}
	}

	cout << x << endl;
}