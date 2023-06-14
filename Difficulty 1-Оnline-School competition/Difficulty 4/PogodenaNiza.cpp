/*
https://mendo.mk/Task.do?id=849
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
    int N;
    cin>>N;
    char niza[N];
    for(int i=0; i<N; i++){
        cin>>niza[i];
    }
    bool flag = false;
    int brojA=0,brojB=0,neispolnet=0;
    for(int i=0; i<N; i++){
        if(niza[i]=='C'){
            flag = true;
            if(brojB >= brojA)
                neispolnet++;
            brojA = 0;
            brojB = 0;
        }
        if(flag){
            if(niza[i] == 'A')
                brojA++;
            else if(niza[i] == 'B')
                brojB++;
        }
    }
    neispolnet--;
    if(neispolnet==0)
        cout<<"POGODENA"<<endl;
    else
        cout<<neispolnet;
 
 
 
 
    return 0;
}