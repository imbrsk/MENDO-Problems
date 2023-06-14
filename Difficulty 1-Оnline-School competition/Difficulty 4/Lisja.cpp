/*	
https://mendo.mk/Task.do?id=94
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
int maxN=-1,brojac;
  for(int i=0;i<30;i++){
    int temp,temp1; cin>>temp>>temp1;
    if(temp1>maxN){
      maxN=temp1;
      brojac=temp;
    }
  }
  cout<<brojac<<" noemvri"<<endl;
}