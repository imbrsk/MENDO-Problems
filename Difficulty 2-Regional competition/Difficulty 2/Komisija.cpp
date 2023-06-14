/*
https://mendo.mk/Task.do?id=271
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
  
int main()
{
    int n, k;
    cin >> n >> k;
  
    vector<int> v;
  
    for (int i=0; i<n; i++)
    {
        int ti;
        cin >> ti;
  
        v.push_back(ti);
    }
  
  
    sort(v.begin(), v.end());
    int rezultat = (v[n-k] - v[n-k-1]);
  
    cout << rezultat << endl;
    return 0;
}