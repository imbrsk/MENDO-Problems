/*	
https://mendo.mk/Task.do?id=80
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
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int dolzina,pat,lizganje,brojacMetri=0,brojacDena=0;
cin>>dolzina>>pat>>lizganje;
while(brojacMetri<dolzina){
  brojacMetri+=pat;
    brojacDena+=1;
  if(brojacMetri<dolzina){
  brojacMetri-=lizganje;
}
else
break;
}
cout<<brojacDena;
}
