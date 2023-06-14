/*
https://mendo.mk/Task.do?id=910
*/
#include <iostream>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
string brojOdBroj(string);
int main(){ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
string a;
cin>>a;
cout<<brojOdBroj(a);
}
string brojOdBroj(string broj){
string kraenBroj=""; int brojac=1;
for(int i=0;i<broj.length();i++){
  if(broj[i]==broj[i+1]){
    brojac+=1;
  }
  else{
    kraenBroj += to_string(brojac) + broj[i];
    brojac=1;
  }
}
return kraenBroj;
}