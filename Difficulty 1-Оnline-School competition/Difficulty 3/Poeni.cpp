/*
https://mendo.mk/Task.do?id=877
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
    int p = 0;
    int d, xp=0, n=0,point=0;
    cin >>p>> d>> n;
    xp = p;
    for (int i = 0; i < n - 1; i++)
    {
        point += xp;
        xp += d;
    }
    cout << point;
    return 0;
}