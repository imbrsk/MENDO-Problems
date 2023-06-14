/*
https://mendo.mk/Task.do?id=168
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
int main(){ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int a,max=0,brojac=0;;
cin>>a;
int niza[a];
for(int i=0;i<a;i++){
  cin>>niza[i];
  if(max<niza[i])
   max=niza[i];
}
for(int i=0;i<a;i++){
  if(max!=niza[i])
    while(niza[i]<max){
        niza[i]+=1; brojac+=1;
    }
}
cout<<brojac;
}