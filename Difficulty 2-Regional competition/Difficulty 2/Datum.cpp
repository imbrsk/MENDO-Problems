/*
https://mendo.mk/Task.do?id=883
*/
#include<iostream>
using namespace std;
int main(){
int dena;
cin >> dena;
if(dena<=24){
  cout<<7+dena<<'.'<<" mart";
}
else if(dena>24&&dena<55){
  cout<<abs(dena-24)<<'.'<<" april";
}
else{
  cout<<abs(dena-54)<<'.'<<" maj";
}
}