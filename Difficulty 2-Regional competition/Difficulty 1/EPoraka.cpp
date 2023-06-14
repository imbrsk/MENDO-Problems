/*
https://mendo.mk/Task.do?id=112
*/
#include<iostream>
using namespace std;
int main()
{
int ucenici, isprateniPoraki, brojac=0;
cin >> ucenici >> isprateniPoraki;
int porakiIsprakac[isprateniPoraki],porakiPrimac[isprateniPoraki];
int poraki[isprateniPoraki];
for (int i=0; i<isprateniPoraki; i++)
{
   cin>> porakiIsprakac[i] >> porakiPrimac[i];
   poraki[i]=0;
}
  
for(int i=0; i<isprateniPoraki; i++)
{
  for(int j=0; j<isprateniPoraki; j++)
  {
    if(porakiIsprakac[i] == porakiPrimac[j] && porakiPrimac[i] == porakiIsprakac[j])
    {
      brojac+=1;
    }
  }
}
//brojac/2;
cout<<isprateniPoraki-brojac<<endl;
}