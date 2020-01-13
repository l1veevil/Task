#include <iostream>
#include <ctime>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int i, v1, v2, t, j;
  
    int arr[10][8] = {
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0}
    };
    i = rand()% 10;
    j = rand()% 8;
    
    arr[i][j] = 2;

    for (int l = 0; l < 10; l++) {
        for (int u = 0; u < 8; u++) {
            cout << arr[l][u] << " ";
        }
    }


    for (int k = 0; k < 5; k++) {
        
            cout << "Попыток осталось: " << 5 - k << endl;
            cout << "Введите строку и столбец: ";
            cin >> v1 >> v2; v1--; v2--;

            if (v1 > 9 or v1 < 0 or v2 > 7 or v2 < 0) { cout << "Выход за пределы массива "; k--; continue; };
            if (arr[v1][v2] == 1) {
                cout << " Эту уже проверяли "; k--; continue;
            }
            if (arr[v1][v2] == 2) {
                cout << "Вы угадали!" << endl; return 1;
            }

            cout << "Промах" << endl;
            arr[v1][v2] = 1;
        
    }
    cout << "Попытки кончились";
}