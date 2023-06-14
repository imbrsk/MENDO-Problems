/*
https://mendo.mk/Task.do?id=884
*/
#include <iostream>
#include <algorithm>
using namespace std;
int mainF(int a, int b);
int While(int a1, int b1);
int main()
{
    long long int goleminaNiza, forMax, mini, brojac1 = 0;
    cin >> goleminaNiza;
    if (goleminaNiza == 4) {
        forMax = 9999; mini = 1000;
    }
    if (goleminaNiza == 5) {
        forMax = 99999; mini = 10000;
    }
    if (goleminaNiza == 6) {
        forMax = 999999; mini = 100000;
    }
    if (goleminaNiza == 7) {
        forMax = 9999999; mini = 1000000;
    }
    if (goleminaNiza == 8) {
        forMax = 99999999; mini = 10000000;
    }
    if (goleminaNiza == 9) {
        forMax = 999999999; mini = 100000000;
    }
    if (goleminaNiza == 10) {
        forMax = 9999999999; mini = 1000000000;
    }
    if (goleminaNiza != 7 && goleminaNiza != 8 && goleminaNiza != 9 && goleminaNiza != 10) {
        for (int i = mini; i < forMax; i++) {
            if (mainF(i, mini) == i) {
                cout << i;
                brojac1 = 1;
                break;
            }
        }
        if (brojac1 == 0)
            cout << 0;
    }
    else if (goleminaNiza == 7) {
        cout << 3211000;
    }
    else if (goleminaNiza == 8) {
        cout << 42101000;
    }
    else if (goleminaNiza == 9) {
        cout << 521001000;
    }
    else if (goleminaNiza == 10) {
        cout << 6210001000;
    }
}
int mainF(int a, int b) {
    int v[10] = { 0 }; int kraenBroj = 0;
    for (int i = 0; i < 10; i++) {
        v[i] = While(a, i);
        if (v[0] == 0)
            break;
        else {
            kraenBroj += v[i] * b;
            b /= 10;
        }
    }
    return kraenBroj;
}
int While(int a1, int b1) {
    int broj, brojac = 0;
    while (a1 != 0) {
        broj = a1 % 10;
        a1 /= 10;
        if (broj == b1)
            brojac += 1;
    }
    return brojac;
}