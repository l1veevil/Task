#include <iostream>

using namespace std;

void swap(int*a, int*b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int msort(int* a, int* b, int* c) {
    if (*a > * b) {
        swap(a,b);
    }
    if (*b > * c) {
        swap(b, c);
    }
    if (*a > * b) {
        swap(a, b);
    }
    return *c;
}

void info(const int* a) {
    cout << "Адрес: " << a << " " << "Значение: " << *a << endl;
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

    info(&a);
    info(&b);
    info(&c);
    cout << "Максимум: " << msort(&a, &b, &c) << endl;
    info(add(add(&a, &b), &c));
    
    
    
   
}

