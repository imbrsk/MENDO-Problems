/*
https://mendo.mk/Task.do?id=26
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int a,b,zbir=0;
cin>>a>>b;
for(int i=a;i<=b;i++)
  if(i%2!=0){
    zbir+=i; 
  }
  cout<<zbir<<endl;
}