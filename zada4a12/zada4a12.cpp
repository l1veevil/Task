
#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");

	int i, j;

	j = 0;

		cout << "введите число" << endl;
		cin >> i;

		for (int t = 2; t != i; t++) {

			if (i % t == 0){ 
			j++;
			break;
		}
		}

		if (j == 1) {
			cout << "Составное";
		}
		else {
			cout << "Простое";
		}

}

/*
cout << "введите число" << endl;
cin >> i;

if (i % i == 0 && i % 1 == 0 && i % 2 != 0 && i % 3 != 0 && i % 4 != 0 && i % 5 != 0 && i % 6 != 0 && i % 7 != 0 && i % 8 != 0 && i % 9 != 0 && i % 10 != 0) {
	cout << "Простое";
}
else {
	cout << "Составное";
}
*/