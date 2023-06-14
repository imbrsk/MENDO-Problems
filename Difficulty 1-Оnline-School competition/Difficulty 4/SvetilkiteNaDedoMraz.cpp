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
const LD ERR = 1e-5; bool areEqual( LD _n1, LD _n2 ){ return fabs( _n1 - _n2 ) < ERR; }
  
const int maxN = 100005;
int A[maxN], ST[4*maxN], lazy[4*maxN];
int N, Q;
  
int  left( int x ){ return x << 1; }
int right( int x ){ return ( x << 1 ) + 1; }
  
void generate( int, int, int );
int value( int, int, int, int, int );
void update( int, int, int, int, int, bool );
  
int main(){ ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  
    memset( lazy, -1, sizeof lazy );
  
    cin >> N >> Q;
  
    for(int i=0;i<N;i++) cin >> A[i];
  
    generate( 1, 0, N-1 );    
  
    char c; int L, R;
    while( Q-- ){
  
        cin >> c >> L >> R;
  
        if( c == '?' ) cout << value( 1, 0, N-1, L-1, R-1 ) << endl;
        if( c == '+' ) update( 1, 0, N-1, L-1, R-1, true );
        if( c == '-' ) update( 1, 0, N-1, L-1, R-1, false ); 
  
        // cout << endl;
        // for(int i=0;i<N;i++){
        //     cout << value( 1, 0, N-1, i, i ) << ' '; 
        // } cout << endl;
  
    }
  
}
  
void generate( int p, int L, int R ){
  
    if( L == R ){
        ST[p] = A[L]; return;
    }
  
    int mid = (L+R) / 2;
  
    generate(  left(p), L, mid );
    generate( right(p), mid+1, R );
  
    int p1 = ST[ left(p) ], p2 = ST[ right(p) ];
    ST[p] = p1 + p2;
  
}
  
int value( int p, int L, int R, int i, int j ){
  
    // cout << p << ' ' << L << ' ' << R << ' ' << ST[p] << ' ' << lazy[p] << endl;
  
    if( lazy[p] != -1 ){
        if( lazy[p] == 1 ) ST[p] = R-L+1;
        else               ST[p] = 0;
        if( L != R ) lazy[  left(p) ] = lazy[p];
        if( L != R ) lazy[ right(p) ] = lazy[p];
        lazy[p] = -1;
    }
  
    if( i > R || j < L )   return 0;
    if( L >= i && R <= j ) return ST[p];
  
    int mid = (L+R) / 2;
  
    int Lv = value(  left(p), L, mid, i, j );
    int Rv = value( right(p), mid+1, R, i, j );
  
    return Lv + Rv; 
  
}
  
void update( int p, int L, int R, int i, int j, bool turnOn ){
      
    // cout << p << ' ' << L << ' ' << R << ' ' << ST[p] << ' ' << lazy[p] << endl;
  
    if( lazy[p] != -1 ){
        if( lazy[p] == 1 ) ST[p] = R-L+1;
        else               ST[p] = 0;
        if( L != R ) lazy[  left(p) ] = lazy[p];
        if( L != R ) lazy[ right(p) ] = lazy[p];
        lazy[p] = -1;
    }
  
    if( i > R || j < L ) return;
    if( L >= i && R <= j ){
        if( turnOn ) ST[p] = R-L+1;
        else         ST[p] = 0;
        if( L != R ) lazy[  left(p) ] = turnOn;
        if( L != R ) lazy[ right(p) ] = turnOn;
        return;
    }
  
    int mid = (L+R) / 2;
  
    update(  left(p), L, mid, i, j, turnOn );
    update( right(p), mid+1, R, i, j, turnOn );
  
    int p1 = ST[ left(p) ], p2 = ST[ right(p) ];
    ST[p] = p1 + p2;
  
}