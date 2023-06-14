/*
https://mendo.mk/Task.do?id=977
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
int a,rez=0,trees[3]={0},maxi=0; cin>>a;
  for(int i=0;i<a;i++){
    int temp; cin>>temp;
    rez+=1;
    if(temp==3&&trees[0]==0){
      trees[0]=rez;
      rez=0;
      continue;
    }
    if(temp==3&&trees[1]==0){
      trees[1]=rez;
      rez=0;
      continue;
    }
    if(temp==3&&trees[2]==0){
      trees[2]=rez;
      rez=0;
      continue;
    }
    if(temp==3){
      maxi=max(maxi,trees[0]+trees[1]+trees[2]+rez-1);
      trees[0]=trees[1];
      trees[1]=trees[2];
      trees[2]=rez;
      rez=0;
      continue;
    }
    if(temp!=3&&i==a-1)
      maxi=max(maxi,trees[0]+trees[1]+trees[2]+rez);
  }
  //each(a,nizi)
  cout<<maxi<<' ';
}