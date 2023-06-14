/*
https://mendo.mk/Task.do?id=962
*/
#include <iostream>
#include <vector>
using namespace std;
#define pb push_back
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization("O2")
#pragma GCC optimization("unrool-loops")
  
int main(){ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   int a=0,tMin=10000,tMax=-1,minI=10000,maxI=-1;bool tracker=false;
   while(a!=11111){
    cin>> a;
    if(a==0||tracker==true){
        if(a==0&&tracker==true){
            maxI=max(maxI,tMax);
            minI=min(tMin,minI);
        }
        if(a!=0)
        tMin=min(tMin,a);
        tMax=max(tMax,a);
        tracker=true;
    }
   }
   cout<<maxI-minI;
}