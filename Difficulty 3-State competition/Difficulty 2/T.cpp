/*
https://mendo.mk/Task.do?id=710
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define pb push_back
#define mp make_pair
#define ins insert
#define each(a,x) for (auto& a: x)
#define pq priority_queue
#define f first
#define s second
#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
#define LL long long
int main(){ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
LL int n,m,best=0,j=0,k=0;  cin>>n>>m;
LL int epizodi[n];
for(int i=0;i<n;i++)
  cin>>epizodi[i];
 
  for(int i=0;i<n;i++,j++){
    m-=epizodi[i];
    if(m<0){
      j-=1;
      m+=epizodi[k];
      k+=1;
    }
  }
  cout<<j<<'\n';
}