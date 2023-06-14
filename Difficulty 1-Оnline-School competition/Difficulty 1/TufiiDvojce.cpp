/*
https://mendo.mk/Task.do?id=703
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
int vkumpoTm,vkumpoTs,
    vkumpoDm,vkumpoDs;
void over60();
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int tm1,tm2,dm1,dm2,ts1,ts2,ds1,ds2;
cin>>tm1>>ts1
   >>tm2>>ts2
   >>dm1>>ds1
   >>dm2>>ds2;
 
    vkumpoTm=tm1+tm2;vkumpoTs=ts1+ts2;
    vkumpoDm=dm1+dm2;vkumpoDs=ds1+ds2;
 
    over60();
 
    int vkT=vkumpoTm*60+vkumpoTs,vkD=vkumpoDm*60+vkumpoDs;
    if(vkT>vkD){
      int zbir=vkT-vkD;
      cout<<'D'<<endl<<abs(zbir/60)<<' '<<abs(zbir%60);
    }
    else{
    int zbir=vkT-vkD;
    cout<<'T'<<endl<<abs(zbir/60)<<' '<<abs(zbir%60);
  }
}
 
void over60(){
  if(vkumpoTs>=60){
    if(vkumpoTs==120){
      vkumpoTs-=120;
      vkumpoTm+=2;
    }
    else{
      vkumpoTs-=60;
      vkumpoTm+=1;
    }
  }
 
  if(vkumpoDs>=60){
    if(vkumpoDs==120){
      vkumpoDs-=120;
      vkumpoDm+=2;
    }
    else{
      vkumpoDs-=60;
      vkumpoDm+=1;
    }
}
}