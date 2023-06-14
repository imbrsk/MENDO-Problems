/*
https://mendo.mk/Task.do?id=853
*/
#include <iostream>
#include <bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n;
bool m=false;
cin>>n;
for(int i=4;i<=n;i+=4){
  if(i==n) { cout<<"DA"; m=true;  break;  }
//  cout<<i<<"|";
   for(int j=i;j<=n;j+=7){
     if(j==n) { cout<<"DA"; m=true;  break; }
    // cout<<j<<";";
   }
 }
if(n!=7){
 if(m==false) cout<<"NE";
}
else cout<<"DA";
}