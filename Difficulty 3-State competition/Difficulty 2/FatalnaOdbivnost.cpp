/*
https://mendo.mk/Task.do?id=859
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, brojac = 0;
    cin >> n;
    const int a = 100;
    int G[a];
    for (int i = 0; i < n; i++)
        cin >> G[i];
    for (int i = 0; i<n-1; i++) {
      for(int j=0;j<n-1;j++){
        if (G[j] < G[j + 1]) {
            G[j] = 2; G[j + 1] = 1; brojac += 1;
        }
      }
    }
 
    cout << brojac;
}