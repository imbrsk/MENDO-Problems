/*
https://mendo.mk/Task.do?id=358
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
bool check_prime(int);
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n,m;  cin>>n>>m;
cout<<(m-n)/5+(m-n)%5/2+(m-n)%5%2;;
}