/*
https://mendo.mk/Task.do?id=363
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
int main(){ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
string a,b;int cifri[10]={0};
cin>>a>>b;
for(int i = stoi(a); i <= stoi(b);i++){
  for(int j=0;j<to_string(i).length();j++){
    string holder =to_string(i);
    cifri[holder[j]-48]+=1;
  }
}
 
for(int i = 0; i < 10;i++)
  cout<<cifri[i]<<" ";
}