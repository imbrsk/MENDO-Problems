/*	
https://mendo.mk/Task.do?id=81
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define pb push_back
#define mp make_pair
#define ins insert
#define each(a,x) for (auto& a: x)
#define ir(i,a,b) for(int i=a;i<b;i++)
#define dr(i,a,b) for(int i=a;i>=b;i--)
#define f first
#define s second
#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int saati, brojac = 0;
    cin >> saati;
    if (saati >= 12) {
        while (saati >= 12) {
            saati -= 12;
            brojac++;
        }
    }
    cout << brojac;
    return 0;
}