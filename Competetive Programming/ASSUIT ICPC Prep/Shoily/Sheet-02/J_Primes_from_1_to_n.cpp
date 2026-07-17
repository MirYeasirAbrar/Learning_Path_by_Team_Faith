#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int i=2; i<=N; i++)
    {
        bool Prime = true;
       for(int j=2; j<i; j++){
        if(i % j == 0) {
        Prime = false;
        break;}
       }
    if (Prime==true) cout<<i<<" ";
    }
}