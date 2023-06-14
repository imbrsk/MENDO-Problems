/*
https://mendo.mk/Task.do?id=848
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
int zajci,vkzelku=0,vkmorkovi=0;
cin>>zajci;
int zelki[zajci],morkovi[zajci];
for(int i=0;i<zajci;i++){
  cin>>zelki[i]>>morkovi[i];
  vkzelku+=zelki[i];vkmorkovi+=morkovi[i];
}
if(vkmorkovi>=vkzelku){
  cout<<"morkov"<<endl<<vkmorkovi;
}
else{
  cout<<"zelka"<<endl<<vkzelku;
}
}