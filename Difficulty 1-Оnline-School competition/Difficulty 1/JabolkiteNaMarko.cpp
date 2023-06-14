/*
https://mendo.mk/Task.do?id=846
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define pb push_back
#define mp make_pair
#define ins insert
#define each(a,x) for (auto& a: x)
#define ir(i,a,b) for(LL int i=a;i<b;i++)
#define dr(i,a,b) for(LL int i=a;i>=b;i--)
#define f first
#define s second
#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops") 
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int jabolki,brojac=0;
cin>>jabolki;
if(jabolki%4==0){
  cout<<0;
}
else{
  while(jabolki%4!=0){
    brojac+=9;
    jabolki+=1;
  }
  cout<<brojac;
}
}