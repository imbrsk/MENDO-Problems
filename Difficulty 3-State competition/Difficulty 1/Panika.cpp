/*
https://mendo.mk/Task.do?id=908
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int h,m,s;
 
cin>>h>>m>>s;
 
int pm,ps;
 
cin>>pm>>ps;
 
int endH=0,endM=0,endS=0;
if(s+ps>=60){
  endS=(s+ps)-60;
  endM+=1;
  //cout<<endM<<endl;
}
else
  endS=s+ps;
if(m+pm>=60){
  endM+=(m+pm)-60;
  endH=1;
}
else
  endM+=m+pm;
endH+=h;
cout<<endH<<" "<<endM<<" "<<endS<<endl;
}