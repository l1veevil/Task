
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");

	float a = -9.8;
	float x0, v0, t, x;
	
	cout << "Введите х0"<< endl;
	cin >> x0;

	cout << "Введите v0" << endl;
	cin >> v0;

	cout << "Введите t" << endl;
	cin >> t;

	x = x0 + v0 * t + a * t * t / 2;
	float x2 = x0 + v0 * t + 1/2* a * t * t;

	cout << "x(t) = " << x << endl;

	cout << x2;
	return 0;
}

