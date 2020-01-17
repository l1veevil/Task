#include <iostream>
#include <string>
using namespace std;


bool polindrom(char* a, int n) {
	bool o = 0;

	for (int i = 0, k = n - 1; i < n && k >= 0;) {
		o = 0;

		if ((a[k] < 48) || (a[k] > 122) || ((a[k] > 90) && (a[k] < 97)) || ((a[k] < 65) && (a[k] > 57))) {
			k--; continue;
		}
		else
			if ((a[i] < 48) || (a[i] > 122) || ((a[i] > 90) && (a[i] < 97)) || ((a[i] < 65) && (a[i] > 57))) {
				i++; continue;
			}
		if ((a[i] == a[k] - 32) || (a[i] == a[k]) || (a[i] == a[k] + 32)) { o = 1; i++; k--; }
		else i = n;
	}
	if (o == 1) return true;
	else return false;
}

int main(){
    char a[21];
    cin >> a;
    int i = strlen(a);
	if (polindrom(&a[0], i)) {
		cout << "Polindrom";
	}
	else {
		cout << "No polindrom";
	}
}

