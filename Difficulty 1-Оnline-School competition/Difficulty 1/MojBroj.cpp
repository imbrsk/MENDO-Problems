/*	
https://mendo.mk/Task.do?id=3
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
int  s = 0, ana1 = 0, ana2 = 0, ana3, stefan1 = 0, stefan2 = 0, stefan3 = 0, stefanpoeni = 0, anapoeni = 0,a1=0,a2=0,a3=0,s1=0,s2=0,s3=0;
    cin >> stefan1 >> ana1;
        cin >> stefan2 >> ana2;
      cin>>  stefan3 >> ana3;
 
    s1 = stefan1; s2 = stefan2; s3 = stefan3;
    a1 = ana1; a2 = ana2; a3 = ana3;
    while (stefan1 != 0)
    {
        s +=  stefan1 % 10;
        stefan1 = stefan1 / 10;
    }
   if (s1 % s == 0)
    {
        stefanpoeni += 2;
        anapoeni = anapoeni- 1;
    }
  
    s = 0;
    while (ana1 != 0) {
        s = s + ana1 % 10;
        ana1 = ana1 / 10;
    }
    if (a1 % s == 0)
    {
        anapoeni += 2;
        stefanpoeni = stefanpoeni - 1;
    }
 
    s = 0;
    while (stefan2 != 0) {
        s = s + stefan2 % 10;
        stefan2 = stefan2 / 10;
    }
    if (s2 % s == 0)
    {
        stefanpoeni += 2;
        anapoeni = anapoeni - 1;
    }
 
    s = 0;
    while (ana2 != 0) {
        s = s + ana2 % 10;
        ana2 = ana2 / 10;
    }
    if (a2 % s == 0)
    {
        anapoeni += 2;
        stefanpoeni = stefanpoeni - 1;
    }
 
    s = 0;
    while (stefan3 != 0) {
        s = s + stefan3 % 10;
        stefan3 = stefan3 / 10;
    }
    if (s3 % s == 0)
    {
        stefanpoeni += 2;
        anapoeni = anapoeni - 1;
    }
 
    s = 0;
    while (ana3 != 0) {
        s = s + ana3 % 10;
        ana3 = ana3 / 10;
    }
    if (a3 % s == 0)
    {
        anapoeni += 2;
        stefanpoeni = stefanpoeni - 1;
    }
 
    cout << stefanpoeni <<" "<< anapoeni<<endl;
    if (stefanpoeni > anapoeni)
        cout << "Stefan";
    if(anapoeni>stefanpoeni)
        cout << "Ana";
    if (stefanpoeni == anapoeni)
    {
        if (s1 > a1 && s1 > a2 && s1 > a3)
            cout << "Stefan";
            if (s2 > a1 && s2 > a2 && s2 > a3)
                cout << "Stefan";
                if (s3 > a1 && s3 > a2 && s3 > a3)
                    cout << "Stefan";
                    if (a1 > s1 && a1 > s2 && a1 > s3)
                        cout << "Ana";
                        if (a2 > s1 && a2 > s2 && a2 > s3)
                            cout << "Ana";
                            if (a3 > s1 && a3 > s2 && a3 > s3)
                                cout << "Ana";
    }
    return 0;
}