/*
https://mendo.mk/Task.do?id=529
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
string niza;    cin>>niza;
char temp;
int brojac=0;
if(niza[0]=='Y')    temp='N';
            else    temp='Y';
 
    for(int i=0;i<niza.length();i++){
        if(niza[i]==temp){
            for(int j=i;j<niza.length();j+=i+1){
                if(niza[j]=='Y')
                    niza[j]='N';
                else
                    niza[j]='Y';
            }
            brojac+=1;
        }
    }
 
if(temp=='N')
    brojac+=1;
 
cout<<brojac;
}