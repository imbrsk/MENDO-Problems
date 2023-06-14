/*
https://mendo.mk/Task.do?id=787
*/
#include <iostream>
#include <string>
  
using namespace std;
  
int main()
{
    string a,b;
    cin >> a;
    b[0] = a[2];
    b[1] = a[1];
    b[2] = a[0];
    if(stoi(b) > stoi(a))
        cout << stoi(b);
    else
        cout << stoi(a);
    return 0;
}