#include<iostream>
using namespace std;
int main()
{
    int A,B,C,D;
    cin>>A>>B>>C>>D;
   long long S = 1;
    S = (S * A) % 100;
    S = (S * B) % 100;
    S = (S * C) % 100;
    S = (S * D) % 100;
    if(S<10)
    cout<<"0"<<S;
   else
    cout<<S;
}