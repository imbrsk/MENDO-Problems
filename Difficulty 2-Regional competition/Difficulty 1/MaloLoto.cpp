/*
https://mendo.mk/Task.do?id=882
*/
#include <iostream>
using namespace std;
int najgolemiBroevi(int Broevi[], int najBroevi[]);
int main()
{
    int bingoBroevi[100], podredeniBroevi[100],Broj;
    for (int i=0; i < 5; i++) {
        cin >> bingoBroevi[i];
    } 
    Broj = najgolemiBroevi(bingoBroevi, podredeniBroevi);
    cout << Broj<<' '<<Broj*2;
    return 0;
}
int najgolemiBroevi(int Broevi[], int najBroevi[]){
    int najgolem , najgolem2 , najgolem3 ;
    for (int i = 0; i < 5; i++) {
        if (Broevi[i] >= Broevi[0] && Broevi[i] >= Broevi[1] && Broevi[i] >= Broevi[2] && Broevi[i] >= Broevi[3] && Broevi[i] >= Broevi[4]) {
            najgolem = Broevi[i];
            Broevi[i] = 0;
        }
    }
    for (int i = 0; i < 5; i++) {
        if (Broevi[i] >= Broevi[0] && Broevi[i] >= Broevi[1] && Broevi[i] >= Broevi[2] && Broevi[i] >= Broevi[3] && Broevi[i] >= Broevi[4]) {
            najgolem2 = Broevi[i];
            Broevi[i] = 0;
        }
    }
    for (int i = 0; i < 5; i++) {
        if (Broevi[i] >= Broevi[0] && Broevi[i] >= Broevi[1] && Broevi[i] >= Broevi[2] && Broevi[i] >= Broevi[3] && Broevi[i] >= Broevi[4]) {
            najgolem3 = Broevi[i];
        }
    }
    return (najgolem * 100 + najgolem2 * 10 + najgolem3);
}