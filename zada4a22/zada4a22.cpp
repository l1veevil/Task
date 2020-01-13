#include <iostream>

using namespace std;

void swap(int*a, int*b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int msort(int* a, int* b, int* c) {
    if (*a > *b and *a > *c) return *a;
    else if (*b > *a and *b > *c) return *b;
    else if (*c > *b and *c > *a)return *c;
}

void info(const int* a, const int* b, const int* c) {
    cout << "Адрес: " << a << " " << "Значение: " << *a << endl;
    cout << "Адрес: " << b << " " << "Значение: " << *b << endl;
    cout << "Адрес: " << c << " " << "Значение: " << *c << endl;
}

int* add(int* a, const int* с) {
    *a += *с;
    return a;
}

int main(){
    setlocale(LC_ALL, "Russian");
    int a = 1;
    int b = 2;
    int c = 3;

    
    info(&a, &b, &c);
    swap(&a, &b);
    cout << "Максимум: " << msort(&a, &b, &c) << endl;
    cout << add(&a, &c) << " " << *add(&a, &c);
   
}

