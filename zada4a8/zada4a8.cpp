
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	double a, b, r;
	char z;
	
	cout << "Введите операцию" << endl;
	cin >> a >> z >> b;

	switch (z) {

		case '-': {
			r = a - b;
			cout << r;
			break;
		}
		case '+': {
			r = a + b;
			cout << r;
			break;
		}
		case '/': {
			if (b == 0) {
				cout << "Ошибка";
			}
			else {
				r = a / b;
				cout << r;
			}
			break;
		}
		case '*': {
			r = a * b;
			cout << r;
			break;
		}
		default:
			cout << "вы не ввели символ-знак операции";
	}


	}



