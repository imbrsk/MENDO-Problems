/*	
https://mendo.mk/Task.do?id=5
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
int brojBroevi[100], tracker = 0, suma = 0, sredenBroj, sporedba[100], track = 0, brojdrugari = 0, najMalBroj = 1000;
    cin >> brojdrugari;
    for (int j = 0; j < brojdrugari; j++)
    {
        tracker++;
        cin >> brojBroevi[j];
        suma += brojBroevi[j];
    }
    sredenBroj = (suma/tracker);
    for (int j = 0; j < brojdrugari; j++)
    {
        sporedba[j] = (compare(brojBroevi[j], sredenBroj, track));
    }
    for (int j = 0; j < (brojdrugari - 1); j++)
    {
        najMalBroj = closest(closest(najMalBroj, sporedba[j]), sporedba[j + 1]);
    }
    for (int j = 0; j < brojdrugari; j++)
    {
        if (najMalBroj == sporedba[j])
        {
        cout << brojBroevi[j] << endl;
            break;
        }
    }
    return 0;
}
int compare(int a, int sum1, int tracker)
{
    if (a > sum1)
    {
        while (a != sum1)
        {
            tracker++;
            a--;
        }
        return tracker;
    }
    if (a < sum1)
    {
        while (a != sum1)
        {
            tracker++;
            a++;
        }
        return tracker;
    }
    if (a == sum1)
        return tracker;
}
int closest(int a, int b)
{
    if (a < b)
        return a;
    if (a > b)
        return b;
    if (a == b)
        return b;
}
