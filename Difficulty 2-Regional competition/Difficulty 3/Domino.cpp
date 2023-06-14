/*
https://mendo.mk/Task.do?id=789
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
int backWordsF(int);
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int broj,zbir=0;
cin>>broj;
for(int i=0;i<broj+1;i++){
  for(int j=0;j<broj+1;j++)
    zbir+=j;
  zbir+=i;
}
cout<<zbir;
}