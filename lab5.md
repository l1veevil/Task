<p text align = "center">МИНИСТЕРСТВО НАУКИ  И ВЫСШЕГО ОБРАЗОВАНИЯ РОССИЙСКОЙ ФЕДЕРАЦИИ  
Федеральное государственное автономное образовательное учреждение высшего образования  

<p text align = "center">КРЫМСКИЙ ФЕДЕРАЛЬНЫЙ УНИВЕРСИТЕТ им. В. И. ВЕРНАДСКОГО"  

<p text align = "center">ФИЗИКО-ТЕХНИЧЕСКИЙ ИНСТИТУТ  

<p text align = "center">Кафедра компьютерной инженерии и моделирования
</p><br/><br/>
​

<p text align = "center"> 
<b>Отчёт по лабораторной работе № 5<br/> по дисциплине "Программирование"</b>

<br/>
​
студента 1 курса группы ИВТ-б-о-192(2)  

Давкуш Максим Константинович  
направления подготовки 09.03.01 "Информатика и вычислительная техника"  
<br/>
​
<table>

<tr><td>Научный руководитель<br/> старший преподаватель кафедры<br/> компьютерной инженерии и моделирования</td>
<td>(оценка)</td>
<td>Чабанов В.В.</td>
</tr>
</table>
<br/><br/>
​
<p text align = "center">Симферополь, 2020<br><br>
<hr>

<h2>Лабораторная работа №5 Работа с текстовыми файлами</h2>

Цель:

1. Научиться работать с текстовыми файлами;
2. Закрепить навыки работы со структурами.

<h3><p text align = "center">Ход работы</p></h3><br><br>

<h3>Общая информация</h3><br>

<table>

<tr><td><h3>Характеристика</h3></td>  <td><h3>Результат</h3></td></tr>
<tr><td>Выжившие</td> <td>342</td></tr>
<tr><td>Количество выживших женщин</td> <td>233</td></tr>
<tr><td>Количество выживших мужчин</td> <td>109</td></tr>
<tr><td>Средний возраст пассажира</td> <td>29</td></tr>
<tr><td>Средний возраст мужчин</td> <td>31</td></tr>
<tr><td>Средний возраст женщин</td> <td>28</td></tr>
<tr><td>Число выживших из 1 класса</td> <td>136</td></tr>
<tr><td>Число выживших из 2 класса</td> <td>87</td></tr>
<tr><td>Число выживших из 3 класса</td> <td>119</td></tr>
<tr><td>Штат, в котором село больше всего пассажиров</td> <td>Southampton</td></tr>

</table><br>
Список идентификаторов несовершеннолетних пассажиров: 8 10 11 15 17 23 25 39 40 44 50 51 59 60 64 69 72 85 87 112 115 120 126 139 145 148 157 164 165 166 172 173 176 183 184 185 194 205 206 209 221 229 234 238 262 267 279 283 298 308 312 330 334 341 349 353 372 375 382 386 387 390 408 418 420 425 434 436 446 447 449 480 481 490 501 505 506 531 533 536 542 543 550 551 575 586 619 635 643 652 655 676 678 684 687 689 690 692 701 703 721 722 732 747 751 752 758 765 776 778 781 782 787 788 789 792 803 808 814 820 825 828 831 835 842 845 851 853 854 856 870 876
<br><br>
<h3>Код программы</h3><br>

```c++
#include <fstream>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int to_int(string arr) {
    int res = 0;
    int temp = 0;
    while (isdigit(arr[temp])) {
        res *= 10;
        res += arr[temp] - 48;
        temp++;
    }
    return res;
}

enum pclass {
    NONE1 = 0,
    FIRST,
    SECOND,
    THIRD
};

enum sex {
    NONE2 = 0,
    MALE,
    FEMALE
};

enum state {
    NONE3 = 0,
    CHERBOURG,
    QUEENSTOWN,
    SOUTHAMPTON
};

struct people {
    int id = 0;
    int surv = 0;
    pclass people_pclass = NONE1;
    sex people_sex = NONE2;
    int age = 0;
    state people_state = NONE3;
};

void parse(ifstream* in, people* man) {
    string str;
    for (int i = 0; i < 12; i++) {
        if (getline(*in, str, ','))
            switch (i) {
            case 0:
                if (str.length())
                    man->id = to_int(str);
                break;
            case 1:
                if (str.length())
                    man->surv = to_int(str) + 1;
                break;
            case 2:
                if (str.length())
                    switch (to_int(str)) {
                    case 1:
                        man->people_pclass = FIRST;
                        break;
                    case 2:
                        man->people_pclass = SECOND;
                        break;
                    case 3:
                        man->people_pclass = THIRD;
                        break;
                    }
                break;
            case 5:
                if (str.length())
                    switch (str[0]) {
                    case 'm':
                        man->people_sex = MALE;
                        break;
                    case 'f':
                        man->people_sex = FEMALE;
                        break;
                    }
                break;
            case 6:
                if (str.length())
                    man->age = to_int(str);
                break;
            }

    }
    getline(*in, str, '\r');
    if (str.length())
        switch (str[0]) {
        case 'S':
            man->people_state = SOUTHAMPTON;
            break;
        case 'Q':
            man->people_state = QUEENSTOWN;
            break;
        case 'C':
            man->people_state = CHERBOURG;
            break;
        }
}

bool is_zero(people* man) {
    return man->age || man->surv || man->people_state || man->people_sex || man->people_pclass || man->id;
}

int main() {
    setlocale(LC_ALL, "Russian");
    ofstream out;
    ifstream in("train.csv");
    out.open("mess.txt");
    char buf[250];
    int surv = 0, first = 0, second = 0, third = 0, male = 0, female = 0;
    int age = 0, m_age = 0, w_age = 0, all_m = 0, all_w = 0;
    int q = 0, s = 0, c = 0;

    in.getline(buf, 250, '\r');

    while (true) {
        people ma;
        parse(&in, &ma);
        if (!is_zero(&ma)) break;
        else {
            if (ma.age) {
                if (ma.age <= 18) out << ma.id << " ";
                age += ma.age;
                if (ma.people_sex) {
                    switch (ma.people_sex) {
                    case MALE:
                        m_age += ma.age;
                        all_m++;
                        break;
                    case FEMALE:
                        w_age += ma.age;
                        all_w++;
                        break;
                    }
                }
            }
            if (ma.surv && (ma.surv - 1)) {
                surv++;
                if (ma.people_sex) {
                    switch (ma.people_sex) {
                    case MALE:
                        male++;
                        break;
                    case FEMALE:
                        female++;
                        break;
                    }
                    switch (ma.people_pclass) {
                    case FIRST:
                        first++;
                        break;
                    case SECOND:
                        second++;
                        break;
                    case THIRD:
                        third++;
                        break;
                    }
                }
            }
            if (ma.people_pclass) {
                switch (ma.people_pclass) {
                case QUEENSTOWN:
                    q++;
                    break;
                case SOUTHAMPTON:
                    s++;
                    break;
                case CHERBOURG:
                    c++;
                    break;
                }
            }

        }
    }
    in.close();


    out << "\nОбщее число выживших: " << surv << endl;
    out << "Число выживших из 1 класса: " << first << endl;
    out << "Число выживших из 2 класса: " << second << endl;
    out << "Число выживших из 3 класса: " << third << endl;
    out << "Количество выживших женщин: " << female << endl;
    out << "Количество выживших мужчин: " << male << endl;    
    out << "Средний возраст: " << age / (all_m + all_w) << endl;
    out << "Средний возраст мужчин: " << m_age / all_m << endl;
    out << "Средний возраст женщин: " << w_age / all_w << endl;
    out << "Штат, в котором село больше всего пассажиров: ";

    if (q == max(q, max(s, c))) out << "Queenstown" << endl;
    else if (c == max(q, max(s, c))) out << "Cherbourg" << endl;
    else if (s == max(q, max(s, c))) out << "Southampton" << endl; 

    out.close();
    
    return 0;

}
```
<a href = "mess.txt">Ссылка на файл</a>

Вывод: Таким образом все цели и задачи лабораторной работы были выполнены в полном объеме. Были получены навыки  разработки многофайловыx приложений. Закрепил навыки работы со структурами. А также закрепляются знания в работе с markdown , C++.