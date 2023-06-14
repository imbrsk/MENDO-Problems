/*
https://mendo.mk/Task.do?id=41
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target("avx2")
#pragma GCC optimization("O2")
#pragma GCC optimization("unroll-loops")
LL int lenght(int);
int max1(int, int);
int main() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, nc;
    cin >> n;
    nc = n;
    int i = lenght(n), B[10] = {0}, max = -1, broevi[lenght(n)];
    while (i--) {
        broevi[i] = nc % 10;
        nc /= 10;
    }
    i = lenght(n);
    while (i--) {
      for(int j=0;j<10;j++)
      if(broevi[i] == j ){ B[j] += 1 ;}
    }
    i = 9; B[6] += B[9] + 1; B[6] /= 2;
    while (i--) {
        max = max1(B[i], max);
    }
    cout << max;
}
int max1(int a, int b) {
    if (a >= b) return a;
    else return b;
}
LL int lenght(int a) {
    int brojac = 0;
    while (a > 0) {
        brojac++;
        a /= 10;
    }
    return brojac;
}