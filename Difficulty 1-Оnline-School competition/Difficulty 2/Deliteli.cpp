/*
https://mendo.mk/Task.do?id=27
*/
#include <bits/stdc++.h>
using namespace std;
int deliteli(int);
int main(){
int pocetok,kraj,maxI=-1,maxD=-1,faster;
cin>>pocetok>>kraj;
for(int i=pocetok;i<=kraj;i++){
    faster=deliteli(i);
   // cout<<i<<' '<<faster<<endl;
    if(faster>maxD){
        maxI=i;
        maxD=faster;
    }
}
if(kraj==1)maxD=1;
cout<<maxI<<' '<<maxD<<endl;
}
int deliteli(int broj){
    int Ideliteli=1,maxI=0;
     
    for(int i=1;i<broj;i++){
        if(broj%i==0)
            Ideliteli+=1;
        if(Ideliteli>maxI)
            maxI=Ideliteli;
    }
    return maxI;
}