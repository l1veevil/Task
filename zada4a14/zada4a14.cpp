
#include <iostream>

using namespace std;

int main(){

		int x1, x2, s, l1, l2, r1, r2, s1, s2, k;

		cin >> s >> l1 >> r1 >> l2 >> r2;

		if (l1 <= r1 and l2 <= r2) {

			for (int i = l1; i < r1; i++) {
				x1 = i;
				x2 = l2;
				for (k = l2; k < r2; k++) {
					if (x1 + x2 == s) {
						break;
					}
					else {
						x2++;
					}
				}
				if (x1 + x2 == s) {
					break;
				}
				else {
					x1++;
				}
			}
		}
		else {
			cout << "error";
		}
		if (x1 + x2 == s) {
			cout << x1 << " " << x2;
		}
		else {
			cout << "-1";
		}

}


