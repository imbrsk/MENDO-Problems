/*
https://mendo.mk/Task.do?id=953
*/
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
#define LL long long
int main(){ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
LL int n,l,k,holder,brojac=0,returnv=0;
cin>>n>>l>>k;
for(int i=0;i<n;i++){
  cin>>holder;
  if(holder >= l){
    brojac+=1;
    if(brojac>k){
      returnv+=1;
    }
  }else
    brojac=0;
}
cout<<returnv;
}