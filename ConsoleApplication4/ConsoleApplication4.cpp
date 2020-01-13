

#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");

	int a , b;
	cout << "Введите число" << endl;
	cin >> a;
	
	cout << "Введите число" << endl;
	cin >> b;

	b = a + b;
	a = b - a;
	b = b - a;
	/*int f;

	b = a;
	a = b;
	//b = f;*/

	cout << a << endl;
	cout << b << endl;
}
