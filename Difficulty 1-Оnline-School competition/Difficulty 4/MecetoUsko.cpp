/*
https://mendo.mk/Task.do?id=360
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
int n,sum=0; cin>>n;
int p[n+1];
ir(i,1,n+1)
  cin>>p[i],sum+=p[i];
 
int v[n+1][sum/2+1];
 
ir(i,0,n+1)
  ir(w,0,sum/2+1)
    if(i==0||w==0)
      v[i][w]=0;
    else if(p[i]<=w)
      v[i][w]=max(p[i]+v[i-1][w-p[i]],v[i-1][w]);
    else
      v[i][w]=v[i-1][w];
 
cout<<sum-v[n][sum/2]*2;
}