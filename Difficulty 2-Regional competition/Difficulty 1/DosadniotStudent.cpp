/*
https://mendo.mk/Task.do?id=467
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int a,zbir=0;
cin>> a;
for(int i=0;i<=a;++i){
  zbir+=i;
if(a==zbir){
  cout<<i;
  break;
}
}
}