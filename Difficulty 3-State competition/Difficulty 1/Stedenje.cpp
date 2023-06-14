/*
https://mendo.mk/Task.do?id=858
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int k,a,b,m=0,i;
cin>>k>>a>>b;
  for(i=0;m<k;i++){
  k+=a; m+=b;
  }
if(k==m)
  cout<<i<<endl;
else
  cout<<"NE"<<endl;
 
//  cout<<k<<" "<<m;
}