#include <iostream>

using namespace std;


bool polindrom(string n) {
    int len = n.length();

    for (int i = 0; i < len / 2; ++i) {
        if (n[i] != n[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main(){
    string n;
    cout << "Vvedite slovo" << endl;
    cin >> n;
    if (polindrom(n)) {
        cout << "Polindrom";
    }
    else {
        cout << "Not polindrom";
    }
}

