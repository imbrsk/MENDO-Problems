/*
https://mendo.mk/Task.do?id=878
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
    int n, sum = 0, result=0;
    cin >> n;
    int niza[n];
    for(int i=0; i<n; i++){
        cin >> niza[i];
        sum += niza[i];
    }
    double maxavg = float(sum) / n;
    for(int i=0; i<n; i++){
        sum -= niza[i];
        float avg = float(sum)/(n-(i+1));
        if(avg > maxavg){
            maxavg = avg;
            result = i+1;
        }
    }
    cout << result;
}