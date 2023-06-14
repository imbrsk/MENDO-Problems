/*
https://mendo.mk/Task.do?id=909
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int m,n;
cin>>m>>n;
int smrk=0;
for(int i = m+1;i<n+1;i++){
  //cout<<i<<"<-i"<<endl;
  if(i%3==1)
    smrk+=1;
  else if(i%3==2)
    smrk+=2;
  else if(i%3==0)
    smrk+=3;
  }
cout<<smrk<<endl;
}