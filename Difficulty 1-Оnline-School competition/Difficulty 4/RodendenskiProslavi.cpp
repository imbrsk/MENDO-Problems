/*
https://mendo.mk/Task.do?id=530
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define pb push_back
#define mp make_pair
#define ins insert
#define each(a,x) for (auto& a: x)
#define pq priority_queue
#define f first
#define s second
#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
#define LL long long
int main(){ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int meseci[31][12]={0},brojacm[12]={0},maxm=0;
int n;cin>>n;
  for(int i=0;i<n;i++){
    int den,mesec;  cin>>den>>mesec;
    if(meseci[den-1][mesec-1]==0){
      meseci[den-1][mesec-1]=1;
      brojacm[mesec-1]+=1;
      maxm=max(brojacm[mesec-1],maxm);
    }
  }
  int temp=0;
  for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
      if(brojacm[j]==maxm){
        cout<<j+1<<endl;
        brojacm[j]=0;
        temp+=1;
      }
    }
    if(temp==0) break;
    temp=0;
  }
}