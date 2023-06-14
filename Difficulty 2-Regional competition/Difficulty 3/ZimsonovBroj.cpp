/*
https://mendo.mk/Task.do?id=854
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define pb push_back
#define mp make_pair
#define ins insert
#define each(a,x) for (auto& a: x)
#define ir(i,a,b) for(int i=a;i<b;i++)
#define dr(i,a,b) for(int i=a;i>=b;i--)
#define f first
#define s second
#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
int cifriDeliv(int ,int);
int palindrom(int ,int);
int lenght(int);
int stepeni(int);
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   int broj1 , broj2 , brojac=0;
  // cout<<"da";
   cin >> broj1 >> broj2;
  // cout<<"da";
   for (int i = broj1; i <= broj2; i++) {
     //cout<<i;
     if(cifriDeliv(i,lenght(i))==1||palindrom(i,lenght(i))==1){
       brojac++;
     }
   }
cout<<brojac;
}//303
int palindrom(int a, int b){
  int broj = a,broevi[b], brojac = 0,brojacCifri=stepeni(b);
  while (broj > 0) {
     broevi[brojac] = broj % 10;
     broj /= 10;
     brojac++;
  }
    for(int i=0;i<b;i++){
    broj+=broevi[i]*brojacCifri;
    brojacCifri/=10;
  }
  if(broj==a) return 1;
  else return 0;
}
int cifriDeliv(int a, int b) {
   int broevi[b], brojac = 0, mirror = a, brojacBroevi = 0, brojacFalse = 0;
   while (mirror > 0) {
      broevi[brojac] = mirror % 10;
      mirror /= 10;
      brojac++;
   }
   while(brojac--){
      if (broevi[brojac] == 0){
         brojacFalse = 1;
        break;
       }
   }
   if (brojacFalse != 1) {
      for (int i = 0; i < b; i++) {
         if (a % broevi[i] == 0) {
            brojacBroevi++;
         }
      }
      if(brojacBroevi==b)
        return 1;
      else
        return 0;
   } else
      return 0;
 
}
int stepeni(int a){
  int b=1;
  for(int i=0;i<a-1;i++){
    b*=10;
  }
  return b;
}
int lenght(int a){
  int brojac=0;
  while(a>0){
    brojac++;
    a/=10;
  }
  return brojac;
}