
#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	
	double n, d, f;

	cin >> n >> d; // n число которое надо возвести в степень, d степень

	f = n;
	if (d == 0) {
		f = 1;
		if (f == 0);
		cout << f;
	}
	else {
		if (n == 0 and d < 0) {
			cout << "error";
		}
		else {
			if (d > 0) {

				while (d > 1) {
					f *= n;
					d--;

				}
				cout << f;
			}
			else{
				while (d < -1) {
					f *= n;
					d++;
				}
				f = 1 / f;
				cout << f;
			}
			if (f == 0) {
				
				
			}

		}
		
	}
	
}