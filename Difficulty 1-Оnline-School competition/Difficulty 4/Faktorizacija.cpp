/*
https://mendo.mk/Task.do?id=29
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
bool check_prime(int);
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n;  cin>>n;
vector<pair<int,int>> v;
int temp=n;
  for(int i=2,j=0;i<=temp;i++){
    bool rerun=false;
    if(check_prime(i)){
      if(n%i==0){
        loop:
        if(rerun){
          v[j].s+=1;
          n/=i;
        }
        else{
          rerun=true;
          n/=i;
          v.pb(mp(i,1));
        }
        if(n%i==0)
          goto loop;
      }
    }
    if(rerun)
      j+=1;
  }
  int i=0;
  each(a,v){
    i+=1;
    if(i<v.size())
      cout<<'('<<a.f<<'^'<<a.s<<')'<<'*';
  }
 
cout<<'('<<v[v.size()-1].f<<'^'<<v[v.size()-1].s<<')';
}
bool check_prime(int n) {
  bool is_prime = true;
 
  if (n == 0 || n == 1) {
    is_prime = false;
  }
 
  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }
 
  return is_prime;
}