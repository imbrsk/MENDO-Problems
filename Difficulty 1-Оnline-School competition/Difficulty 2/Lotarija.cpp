/*
https://mendo.mk/Task.do?id=783
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
int winNum[7],count=0;bool rez[7]={false};
for(int i=0;i<7;i++)
  cin>>winNum[i];
 
for(int i=0;i<5*6;i++){
  int holder;cin>>holder;
  for(int j=0;j<7;j++){
    if(holder==winNum[j]&&rez[j]!=true){
      rez[j]=true;
      count+=1;
      break;
    }
  }
}
 
if(count==7)
  cout<<"DA"<<endl;
else
  cout<<"NE"<<endl;
 
}