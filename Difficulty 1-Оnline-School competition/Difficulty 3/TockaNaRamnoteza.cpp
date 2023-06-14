/*
https://mendo.mk/Task.do?id=701
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
int main(){ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int a,sum1=0,sum2=0; cin>>a;
int nizi[a];
ir(i,0,a)
  cin>>nizi[i];
if(a==1){
  cout<<'1';
  return 0;
}
sum1=nizi[0];
dr(j,a-1,2)
  sum2+=nizi[j];
ir(i,1,a-1){
    if(sum1==sum2){
      cout<<i+1;
      return 0;
  }
  sum1+=nizi[i];
  sum2-=nizi[i+1];
}
cout<<"-1";
}