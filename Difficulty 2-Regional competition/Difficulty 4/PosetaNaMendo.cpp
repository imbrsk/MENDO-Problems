/*
https://mendo.mk/Task.do?id=905
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
 
LL int k,n,res=0;  cin>>k>>n;
LL int nizi[n],freq[105];
memset(freq,0,sizeof freq);
ir(i,0,n) cin>>nizi[i];
ir(i,0,n) {int temp; cin>>temp; freq[temp]+=1;}
 
dr(i,100,1) freq[i-1]+=freq[i];
 
ir(i,0,n)
  if(k-nizi[i]>=0){
    res+=freq[k-nizi[i]];
  }
  else
    res+=n;
 
  cout<<res<<'\n';
}