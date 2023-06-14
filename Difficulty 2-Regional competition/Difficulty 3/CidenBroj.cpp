/*
https://mendo.mk/Task.do?id=957
*/
#include <iostream>
#include <vector>
using namespace std;
#define pb push_back
#define LL long long
#define each(a,x) for (auto& a: x)
#pragma GCC target ("avx2")
#pragma GCC optimization("O2")
#pragma GCC optimization("unrool-loops")
 
int main(){ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   char a[3];LL int b; vector <LL int> niza;
    for(int i=0;i<3;i++){
        cin>>a[i];
        niza.pb(a[i]-48);
    }
    cin>>b;
 
    LL int holder[3],temp=0,brojac=0;
 
    holder[0]=a[0]-48;
    holder[1]=a[1]-48;
    holder[2]=a[2]-48;
    for(int i=3;true;i++){
        niza.pb((holder[0]+holder[1]+holder[2])%10);
        holder[temp]=niza[i];
        brojac+=1;
        temp+=1; if(temp==3) temp=0;
        if(i>3)
            if(niza[i]==a[2]-48&&niza[i-1]==a[1]-48&&niza[i-2]==a[0]-48)
                break;
    }
      niza.pop_back();
      niza.pop_back();
      niza.pop_back();
 
    if(b%brojac==0){
      cout<<niza[brojac-1];
      return 0;
    }
    cout<<niza[(b%brojac)-1];
 
}