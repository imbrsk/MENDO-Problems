/*
https://mendo.mk/Task.do?id=705
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
#define pq priority_queue
#define f first
#define s second
#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
#define LL long long
 
int main(){ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int n,m,k;  cin>>n>>m>>k;
int count[3]={0};
ir(i,n,m+1){
  if(i<10)
    count[0]+=1;
  else if(i<100)
    count[1]+=1;
  else
    count[2]+=1;
}
int sum=count[0]+count[1]*2+count[2]*3,res=0;
 
ir(i,1,sum+1){
  if(i%k==0)
    res+=1;
}
cout<<sum-res;
}