/*	
https://mendo.mk/Task.do?id=83
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
    int px, py, a, b;
    cin >> px >> py >> a >> b;
  
    int tx, ty;
    cin >> tx >> ty;
  
    if ((tx < px) || (tx > px+a) || (ty < py) || (ty > py+b))
    {
        cout << "nadvor" << endl;
    } else
    {
        if ((tx == px) || (tx == px+a) || (ty == py) || (ty == py+b))
        {
            cout << "strana" << endl;
        } else
        {
            cout << "vnatre" << endl;
        }
    }
  
    return 0;
}