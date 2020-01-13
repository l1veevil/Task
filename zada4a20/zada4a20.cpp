#include <iostream>


using namespace std;

void display(int* arr, int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    delete[] arr;
}

void babl(int size, int* arr) {
    int t;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

int main(){
    int size;
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    babl(size,arr);
    display(arr, size);
    /*int* arr = new int[size];

   
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    t = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = t;
                }
            }
        }
        
       for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        delete[] arr;*/
}

