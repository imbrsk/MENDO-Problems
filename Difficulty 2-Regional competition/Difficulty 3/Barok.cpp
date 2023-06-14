/*
https://mendo.mk/Task.do?id=465
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
short int l,w;  cin>>l>>w;
int target; cin>>target;
short int barok;  cin>>barok;
queue<pair<short int,short int>> progress;
 
short int n[l][w];int months=0;
memset(n,0,sizeof(n));
target-=barok;
ir(i,0,barok){
  short int a,b;  cin>>a>>b;
progress.push({a-1,b-1});
n[a-1][b-1]=1;
}
while(target>0){
int i=progress.size();
  while (i--){
    auto temp = progress.front();
      progress.pop();
 
    if(temp.f+1<l)
      if(n[temp.f+1][temp.s]!=1){
        n[temp.f+1][temp.s]=1;
        target-=1;
        progress.push({temp.f+1,temp.s});
      }
    if(temp.f-1>=0)
      if(n[temp.f-1][temp.s]!=1){
        n[temp.f-1][temp.s]=1;
        target-=1;
        progress.push({temp.f-1,temp.s});
      }
    if(temp.s-1>=0)
      if(n[temp.f][temp.s-1]!=1){
        n[temp.f][temp.s-1]=1;
        target-=1;
        progress.push({temp.f,temp.s-1});
      }
    if(temp.s+1<w)
      if(n[temp.f][temp.s+1]!=1){
        n[temp.f][temp.s+1]=1;
        target-=1;
        progress.push({temp.f,temp.s+1});
      }
  }
 
  // ir(i,0,l){
  //   ir(j,0,w){
  //     cout<<n[i][j]<<' ';
  //   }
  //   cout<<'\n';
  // }
  // cout<<'\n';
 
  months+=1;
}
cout<<months;
}