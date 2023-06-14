/*	
https://mendo.mk/Task.do?id=84
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define pb push_back
#define mp make_pair
#define ins insert
#define each(a,x) for (auto& a: x)
#define ir(i,a,b) for(int i=a;i<b;i++)
#define dr(i,a,b) for(int i=a;i>=b;i--)
#define f first
#define s second
#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n,place,mainS=0,rez,col;
cin>>n;
int kvadrat[n*n];
for(int i=0;i<n*n;i++){
  cin>>kvadrat[i];
  if(kvadrat[i]==-1){
    place=i;
    if(n==3)
    col=(i/3)+1;
    else if(n==4)
    col=i/4+1;
  }
}
//cout << col;
if(n==3){
  if(place<3){
    mainS+=(kvadrat[6]+kvadrat[7]+kvadrat[8]);
  }
  else if(place>2&&place<6){
    mainS+=(kvadrat[0]+kvadrat[1]+kvadrat[2]);
  }
  else{
    mainS+=(kvadrat[3]+kvadrat[4]+kvadrat[5]);
  //  cout<<mainS<<endl;
  }
 
  if(col==1)
    rez=mainS-kvadrat[place+3]-kvadrat[place+6];
  else if(col==2)
    rez=mainS-kvadrat[place+3]-kvadrat[place-3];
  else{
    rez=mainS-kvadrat[place-3]-kvadrat[place-6];
  //  cout<<"pog"<<endl;
  }
}
else if(n==4){
 
  if(place<4){
    mainS+=(kvadrat[8]+kvadrat[9]+kvadrat[10]+kvadrat[11]);
  }
  else if(place>3&&place<8){
    mainS+=(kvadrat[0]+kvadrat[1]+kvadrat[2]+kvadrat[3]);
  }
  else if(place>7&&place<12){
    mainS+=(kvadrat[12]+kvadrat[13]+kvadrat[14]+kvadrat[15]);
  }
  else{
    mainS+=(kvadrat[4]+kvadrat[5]+kvadrat[6]+kvadrat[7]);
  //  cout<<mainS<<endl;
  }
 
  if(col==1)
    rez=mainS-kvadrat[place+4]-kvadrat[place+8]-kvadrat[place+12];
  else if(col==2)
    rez=mainS-kvadrat[place-4]-kvadrat[place+4]-kvadrat[place+8];
  else if(col==3){
    rez=mainS-kvadrat[place-8]-kvadrat[place-4]-kvadrat[place+4];
 
  }
  else{
    rez=mainS-kvadrat[place-4]-kvadrat[place-8]-kvadrat[place-12];
  //  cout<<"pog"<<endl;
  }
}
else{
  cout<<'1';
  return 0;
}
cout<<rez;
} 