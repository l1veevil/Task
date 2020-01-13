#include <iostream>

using namespace std;

int main() {
	
	int arr[10]{};
	int size = 0;
	int inp = 0;
	cin >> size;
	for (int i = 0; i < size; i++) { 
		cin >> inp;
		arr[inp]++;
	}
	for (int i = 0; i < 10; i++) if (arr[i]) printf("%i: %i \n", i, arr[i]);

}