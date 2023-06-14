/*
https://mendo.mk/Task.do?id=139
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
string broj;  cin>>broj;
int smallNum[broj.length()],bigNum[broj.length()],res[broj.length()];
ir(i,0,broj.length()){
  smallNum[i]=broj[i];
  bigNum[i]=broj[i];
}
sort(smallNum, smallNum + broj.length());   sort(bigNum, bigNum + broj.length() , greater<>());
  for(int i=broj.length()-1;i>=0;i--){
      if(bigNum[i]<smallNum[i]){
        bigNum[i]+=10;
        bigNum[i-1]-=1;
        res[i]=bigNum[i]-smallNum[i];
      }
      else{
        res[i]=bigNum[i]-smallNum[i];
      }
  }
  bool flag=true,isbroj=false;
    ir(i,0,broj.length()){
      if(res[i]!=0||isbroj){
        isbroj=true;
        flag=false;
        cout<<res[i];
      }
  }
  if(flag)
    cout<<'0';
}