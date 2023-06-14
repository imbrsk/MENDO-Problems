/*
https://mendo.mk/Task.do?id=28
*/
#include <iostream>
using namespace std;/*
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")*/
int max(int,int);
int main(){
    int a; cin>>a;
    int b[a][3]; int zbir[a] = {0};
    for(int i=0; i<a; i++)
        for(int j=0;j<3;j++){
            cin>>b[i][j];
            if(j==0)
                zbir[i]+=(b[i][j]*3);
            else if(j==1)
              zbir[i]+=b[i][j];
        }
        int maxI=0;
    for(int i=0; i<a;i++){
        maxI=max(zbir[i], maxI);
    }
    cout<<maxI<<endl;
}
int max(int a,int b){
 if(a > b)
 return a;
 else
 return b;
}