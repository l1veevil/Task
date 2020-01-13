
#include <iostream>
#include <ctime>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));    
	int i, a, n, ran, c, z;
	i = 1;
	do {
		cout << "i zagadal chislo" << endl;
		ran = rand() % 100;

		while (i <= 5) {
			cout << "RAN = " << ran << '\n';
			cin >> a;

			if (a == ran) {
				cout << "you win" << endl;
				break;
			}
			else {
				if (i == 5) {
					cout << "You lose! Загаданное число было: " << ran << endl;
					break;
				}	
				if (a < ran) {
					cout << "Загаданное число больше" << endl;

				}
				else {
					cout << "Загаданное число меньше" << endl;
				}
				
			}

			i++;
		}
		
		cout << "press 1 to restart" << endl;
		cin >> z;
		i = 1;
		if (z != 1) break;
	} while (true);
		

	
	
	
}