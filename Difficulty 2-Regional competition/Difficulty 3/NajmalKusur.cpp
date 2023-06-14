/*
https://mendo.mk/Task.do?id=904
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
    int C[3], M;
    cin >> C[0] >> C[1] >> C[2] >> M;
  
    int minKusur = M;
    int MC[3];
  
    for( int i = 0 ; C[0]*i <= M ; i++ ){
        for( int j = 0 ; C[0]*i + C[1]*j <= M ; j++ ){
  
            int k = ( M - C[0]*i - C[1]*j ) / C[2];
  
            int kusur = M - C[0]*i - C[1]*j - C[2]*k;
  
            if( kusur < minKusur ){
                minKusur = kusur;
                MC[0] = i;
                MC[1] = j;
                MC[2] = k;
            }
  
        }
    }
  
    cout << minKusur << endl;
    cout << MC[0] << ' ' << MC[1] << ' ' << MC[2] << endl;
  
}