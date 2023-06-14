/*
https://mendo.mk/Task.do?id=614
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
int n,m,x,y;
cin>>n>>m>>x>>y;
int diagonals[4];
memset(diagonals,0,sizeof diagonals);
for(int i=x;i<n;i++){
  diagonals[0]+=1;
}
for(int i=x-1;i>0;i--){
  diagonals[1]+=1;
}
for(int i=y;i<m;i++){
  diagonals[2]+=1;
}
for(int i=y-1;i>0;i--){
  diagonals[3]+=1;
}
  // each(a,diagonals)
  //   cout<<a<<' ';
  //   cout<<'\n';
 
    int dig1=max(diagonals[0],diagonals[1]),dig2=max(diagonals[2],diagonals[3]);
  if(diagonals[0]==diagonals[1]&&diagonals[2]==diagonals[3]&&diagonals[1]==diagonals[2])
    cout<<diagonals[0]*2<<'\n'<<'4';
  else if(diagonals[0]==diagonals[1]&&diagonals[2]==diagonals[3]){
    cout<<dig1+dig2<<'\n'<<'4';
  }
  else{
    if(dig1==dig2)
      cout<<dig1*2<<'\n'<<'1';
    else{
      if(dig1>dig2){
        if(diagonals[0]==diagonals[1]){
          cout<<dig1+dig2<<'\n'<<'2';
        }
        else if(diagonals[2]!=diagonals[3])
          cout<<dig1+dig2<<'\n'<<'1';
        else
          cout<<dig1+dig2<<'\n'<<'2';
      }
      else{
        if(diagonals[3]==diagonals[2]){
          cout<<dig1+dig2<<'\n'<<'2';
        }
        else if(diagonals[1]!=diagonals[0])
          cout<<dig1+dig2<<'\n'<<'1';
        else
          cout<<dig1+dig2<<'\n'<<'2';
      }
    }
  }
}