/*
https://mendo.mk/Task.do?id=38
*/
#include <iostream>
using namespace std;
   
int main()
{
    int P, K;
    cin >> P >> K;
   
    int fib[100];
    fib[1] = fib[2] = 1;
   
    int counter = 0;
    for(int i=3; fib[i-1] <= K; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
   
        if (fib[i] >= P && fib[i] <= K)
        {
            counter++;
        }
    }
   
    cout << counter << endl;
    return 0;
}