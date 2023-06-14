/*
https://mendo.mk/Task.do?id=881
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define pb push_back
#define mp make_pair
#define ins insert
#define each(a,x) for (auto& a: x)
#define ir(i,a,b) for(LL int i=a;i<b;i++)
#define dr(i,a,b) for(LL int i=a;i>=b;i--)
#define f first
#define s second
#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops") 
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int dolzina, sirina, pozicija1, pozicija2;
    cin >> dolzina >> sirina;
    cin >> pozicija1 >> pozicija2;
/*  if (dolzina != 0 || sirina != 0) {*/
        if (pozicija1 != 0 || pozicija2 != 0) {
            if (pozicija1 > 0 && pozicija2 > 0) {
                if (dolzina >= pozicija1 && sirina >= pozicija2) {
                    cout << "DA";
                }
                else {
                    cout << "NE";
                }
            }
            else {
                cout << "NE";
            }
        }
        else {
            cout << "NE";
        }
    //}
    //else
    //  cout << "NE";
}