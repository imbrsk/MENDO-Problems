/*
https://mendo.mk/Task.do?id=284
*/
#include <bits/stdc++.h>
#define LL long long
#pragma GCC target("avx2")
#pragma GCC optimization("O2")
#pragma GCC optimization("unroll-loops")
using namespace std;
int main(){
  int ocena,bodovi,vkbodovi=0,krajbodovi;
  cin>>ocena;
  for(int i=0;i<4;i++){
    cin>>bodovi;
vkbodovi+=bodovi;
  }
  switch (ocena) {
    case 2:
    if(vkbodovi/5>=60&&vkbodovi/5<70){
      krajbodovi=0;
    }
    else if(vkbodovi/5<60)
      krajbodovi=300-vkbodovi;
    else
      krajbodovi=-1;
    break;
 
    case 3:
    if(vkbodovi/5>=70&&vkbodovi/5<80){
      krajbodovi=0;
    }
    else if(vkbodovi/5<70)
      krajbodovi=350-vkbodovi;
    else
      krajbodovi=-1;
    break;
 
    case 4:
    if(vkbodovi/5>=80&&vkbodovi/5<90){
      krajbodovi=0;
    }
    else if(vkbodovi/5<80)
      krajbodovi=400-vkbodovi;
    else
      krajbodovi=-1;
    break;
 
    case 5:
    if(vkbodovi/5>=90&&vkbodovi/5<100){
      krajbodovi=0;
    }
    else if(vkbodovi/5<90)
      krajbodovi=450-vkbodovi;
    else
      krajbodovi=-1;
    break;
  }
  if(krajbodovi!=-1&&krajbodovi<=100)
    cout<<krajbodovi<<endl;
  else
    cout<<"GRESHKA"<<endl;
}