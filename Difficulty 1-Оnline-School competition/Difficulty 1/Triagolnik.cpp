/*
https://mendo.mk/Task.do?id=782
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
int broja[3], min, denariBrojac = 0, razlika = 0, razlika1 = 0;
    for (int i = 0; i < 3; i++) {
        cin >> broja[i];
    }
    for (int j = 0; j < 3; j++) {
        for (int i = j; i < 3; i++) {
            if (broja[j] >= broja[i])
            {
            }
            else
            {
                min = broja[i];
                broja[i] = broja[j];
                broja[j] = min;
            }
        }
    }
    if (broja[2] == broja[1] && broja[2] == broja[0]) 
    {
    }
    else if (broja[0] == broja[1] && broja[1] > broja[2]) {
        razlika = broja[1] - broja[2];
            while (razlika != 0) {
                razlika -= 1;
                denariBrojac += 10;
        }
    }
    else if (broja[0] > broja[1] && broja[1] == broja[2]) {
        razlika = broja[0] - broja[1];
        while (razlika != 0) {
            razlika -= 1;
            denariBrojac += 10;
        }
    }
    else {
        razlika = broja[0] - broja[1];
        razlika1 = broja[1] - broja[2];
        while (razlika != 0) {
                denariBrojac += 10;
                razlika -= 1;
        }
        while (razlika1 != 0){
                denariBrojac += 10;
                razlika1 -= 1;
        }
    }
    cout << denariBrojac;
}