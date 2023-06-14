/*
https://mendo.mk/Task.do?id=269
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
int mainF(int,int,int);
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int p1,p2,p3;
cin>>p1>>p2>>p3;
cout<<mainF(p1,p2,p3);
}
int mainF(int p1,int p2,int p3){
  if(p2-p1==p3-p2) return p2-p1+p3 ;
  if(p2/p1==p3/p2) return p3/p2*p3;
}