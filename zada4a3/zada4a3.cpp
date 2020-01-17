#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
   // int a; double b;
   // double a; int b;
    double a, b;
   // int a, b;
    cout << "Введите два значения через пробел" << endl;
    cin >> a >> b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;


}

