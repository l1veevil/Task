
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");

	double a, b, c, A, B, C, S, f, p, p2;
	double Ax1, Ay2, Bx1, By2, Cx1, Cy2;

	cout << "Выбрать способ ввода, Длины сторон (a,b,c) введите 1, если координаты вершин(A,B,C) введите 2" << endl;
	cin >> f;

	if (f == 1) {
		cout << "Введите а" << endl;
		cin >> a;

		cout << "Введите b" << endl;
		cin >> b;

		cout << "Введите c" << endl;
		cin >> c;

		if (((a + b) > c) && ((a + c) > b) and ((c + b) > a)) {
			p = (a + b + c) / 2;

			S = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "S = " << S << endl;
		}
		else {
			cout << "Введи правильные числа!!!";
		}
	}
	else{

		cout << "Введите координату A" << endl;
		cin >> Ax1;
		cin >> Ay2;

		cout << "Введите координату B " << endl;
		cin >> Bx1;
		cin >> By2;
					
		cout << "Введите координату C " << endl;
		cin >> Cx1;
		cin >> Cy2;

		S = abs((((Ax1 - Cx1) * (By2 - Cy2)) - ((Bx1 - Cx1) * (Ay2 - Cy2)))/2);
		cout << "S = " << S;
	}
	
}

