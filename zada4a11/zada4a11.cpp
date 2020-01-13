
#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a, b;

	cout << "Значение факториала: " << endl;
	cin >> a;

	b = a;
	if (a != 0) {
		while (a > 1) {
			b *= (a - 1);
			a--;
		}
		cout << b;
	}
	else cout << "1";



	
	
}

