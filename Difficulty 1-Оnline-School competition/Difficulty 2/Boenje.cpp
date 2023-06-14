/*
https://mendo.mk/Task.do?id=611
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
  int n,m,c=0,z=0,zl=0;
  cin>>n>>m;
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
      if(i%3==0){
        if(j%3==0)
          c+=1;
        else if(j%3==1)
          z+=1;
        else
          zl+=1;
      }
      else if(i%3==1){
        if(j%3==0)
          z+=1;
        else if(j%3==1)
          zl+=1;
        else
          c+=1;
      }
      else{
        if(j%3==0)
          zl+=1;
        else if(j%3==1)
          c+=1;
        else
          z+=1;
      }
    }
    cout<<c<<' '<<z<<' '<<zl;
}