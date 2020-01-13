#include <iostream>
#include <ctime>

using namespace std;

int arr[20];

void ra() {
	srand(time(0));
	for (int i = 0; i < 20; i++) {
		arr[i] = (rand() % 201) - 100;
	}
}

void vi() {
	ra();
	for (int i = 0; i < 20; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

double maximum() {
	int max = arr[0];
	for (int i = 1; i < 20; i++) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

double minimum() {
	int min = arr[0];
	for (int i = 0; i < 20; i++) {
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

int main(){

	vi();

	cout << maximum() << endl;
	cout << minimum() << endl;
	

}

