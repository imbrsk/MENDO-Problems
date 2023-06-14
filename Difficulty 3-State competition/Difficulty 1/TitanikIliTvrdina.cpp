/*
https://mendo.mk/Task.do?id=712
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
int n,a,b,c;  cin>>n>>a>>b>>c;
int tip1[n][n],tip2[n][n];
bool temp=false;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    if(temp==false){
      if(j%2==0)
        tip1[i][j]=0;
      else
        tip1[i][j]=1;
    }
    else{
      if(j%2!=0)
        tip1[i][j]=0;
      else
        tip1[i][j]=1;
      }
    }
    if(i%2==0)
      temp=true;
    else
      temp=false;
  }
  for(int i=0,k=n;i<n;i++,k--){
    for(int j=0;j<n;j++){
      if(j<k)
        tip2[i][j]=1;
      else
        tip2[i][j]=0;
    }
  }
  if(tip1[b][a]==c&&tip2[b][a]==c)
    cout<<'3'<<"\n";
  else if(tip1[b][a]==c)
    cout<<'1'<<"\n";
  else if(tip2[b][a]==c)
    cout<<'2'<<"\n";
  else
    cout<<'4'<<"\n";
}