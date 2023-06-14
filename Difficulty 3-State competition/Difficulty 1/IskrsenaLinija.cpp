/*
https://mendo.mk/Task.do?id=798
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target("avx2")
#pragma GCC optimization("O2")
#pragma GCC optimization("unroll-loops")
int main() { ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int dolzina[4],holder;
for(int i=0;i<4;i++)  cin>>dolzina[i];
sort(dolzina,dolzina + 4);
int resenie;
resenie = dolzina[2]*dolzina[0];
cout<<resenie<<endl;
}