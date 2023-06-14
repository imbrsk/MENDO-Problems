/*
https://mendo.mk/Task.do?id=543
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
 
int main(){ ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int a,b;  cin>>a>>b;
vector<int> paketi;
for(int i=min(a,b);i>=1;i--){
  if(a%i==0&&b%i==0)
    paketi.pb(i);
}
 
  dr(i,paketi.size()-1,0)
    cout<<paketi[i]<<endl;
}