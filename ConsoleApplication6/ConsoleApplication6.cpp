
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
   
	float a, b, c, D, x1, x2, x;
	
	cout << "Введите а" << endl;
	cin >> a;

	cout << "Введите b" << endl;
	cin >> b;

	cout << "Введите с" << endl;
	cin >> c;


	
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "бесконечное множество точек пересечения" << endl;
			}
			else {
				cout << "точек пересечения нет" << endl;
			}
			
		}
		else {
			x = -c / b;
			cout << x << endl;

		}
	}
	else {
		D = b * b - 4 * a * c;
		if (D < 0){
			cout << "Корней нет" << endl;
		}
		else 
			if (D == 0) {
				x = -b / (2 * a);
				cout << x << endl;
			}else
		
			{
			
				x1 = (-b + sqrt(D)) / (2 * a);
				x2 = (-b - sqrt(D)) / (2 * a);

				cout << x1 << endl;
				cout << x2 << endl;
			}
	}
	
	
}

