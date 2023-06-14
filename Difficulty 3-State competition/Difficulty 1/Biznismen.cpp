/*
https://mendo.mk/Task.do?id=475
*/
#include <iostream>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
int pomestuvanje(string,string);
int main(){ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
string broj,broj1;
cin>>broj>>broj1;char a='4';
cout<<pomestuvanje(broj,broj1);
}
int pomestuvanje(string prvB,string vtorB){
  int pomestuvanja1=0,pomestuvanja2=0,pomestuvanja=0;
  for(int i=0;i<4;i++){
    int holder1=prvB[i]-48,holder2=vtorB[i]-48;
    pomestuvanja1=0;pomestuvanja2=0;
    if(prvB[i]!=vtorB[i]){
      while(holder1!=holder2){
        holder1+=1;
        pomestuvanja1+=1;
        if(holder1==10)
          holder1=0;
      }
 
      holder1=prvB[i]-48;
      while(holder1!=holder2){
        holder1-=1;
        pomestuvanja2+=1;
        //return pomestuvanja2;
        if(holder1==-1)
          holder1=9;
      }
      pomestuvanja+=min(pomestuvanja1,pomestuvanja2);
 
    }
  }
  return pomestuvanja;
}