#include <iostream>

using namespace std;

void factorization(int n) {
    int p = 2;
    cout << n << " = 1";
    while (n > 1) {
        while (n % p == 0)
        {
            n /= p;
            cout << " * " << p;
        }
        if (p == 2) p++;
        else p += 2;
    }
    cout << "\nЕдиницу можно отбросить" << endl;
}

int main(){
    setlocale(LC_ALL, "Russian");
    int x;
    cout << "Введите число: ";
    cin >> x;
    factorization(x);
}
