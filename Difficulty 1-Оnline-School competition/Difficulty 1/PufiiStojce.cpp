/*
https://mendo.mk/Task.do?id=532
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
 int a =1, b = 0, c = 0, i = 0,n=0,a1,a2,a3;
    cin >> a >> b >> c;
    n = (a + b + c);
    if (n % 3 == 0)
    {
        cout << i;
    }
    else
    {
        while (n % 3 != 0)
        {
            i++;
            n += 1;
        }
        cout << i;
    }
    return 0;
}