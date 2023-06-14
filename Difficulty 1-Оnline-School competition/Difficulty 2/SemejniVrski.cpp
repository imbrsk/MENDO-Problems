/*	
https://mendo.mk/Task.do?id=93
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
int godini;
cin>>godini;
cout<<godini+backWordsF(godini);
}
int backWordsF(int a){
  int b=2,c[2];
  while(b--){
    c[b]=a%10;
    a/=10;
  }
  return c[0]+(c[1]*10);
}