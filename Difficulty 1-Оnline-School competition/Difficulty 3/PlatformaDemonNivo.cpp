/*
https://mendo.mk/Task.do?id=898
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
int N, LEN;
int L = 0, R;
int main() {
     ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     cin >> N >> LEN; R = LEN;
 
     int _L, _R;
     int RES = 0;
     for(int i=0;i<N;i++){
 
         cin >> _L >> _R;
 
         if( L > _L && R < _R ) continue; // se rasprsnuva
         if( _L >= L && _R <= R ){ RES++; continue; } // ne menuva nisto
 
         int HALF = (_R-_L)/2;
         int OFFSET;
 
         if( _L >= L && _R > R ) OFFSET = _R - R;
         else if( _L < L && _R <= R ) OFFSET = L - _L;
         else cout << "poggeri" << endl;
 
         if( OFFSET <= HALF ){
             L = min( L, _L );
             R = max( R, _R );
             RES++;
         }
 
     }
 
     cout << RES << endl;
}