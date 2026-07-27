#include<iostream>
using namespace std;
int main()
{
    int Y,M,D;
    cin>>D;
  Y = D/365;
  D %= 365;
  M = D/30;
  D %= 30;
  cout<<Y<<" years"<<endl<<M<<" months"<<endl<<D<<" days";

}