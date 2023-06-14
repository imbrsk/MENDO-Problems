/*
https://mendo.mk/Task.do?id=852
*/
#include <iostream>
//#include <bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
using namespace std;
int maxF(int a, int b);
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    const int a = 3;
    int n[a], max, i = 3, zbir;
    cin >> n[0] >> n[1] >> n[2];
    max = maxF(maxF(n[0], n[1]), n[2]);
    while (i--) {
        if (n[i] == max) {
            zbir = n[0] + n[1] + n[2] - n[i] + n[i] * n[i];
            cout << zbir;
            break;
        }
    }
    return 0;
}
int maxF(int a, int b) {
    if (a >= b) return a;
    else return b;
}