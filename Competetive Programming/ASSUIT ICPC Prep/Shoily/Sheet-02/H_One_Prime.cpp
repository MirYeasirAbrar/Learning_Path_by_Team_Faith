#include<iostream>
using namespace std;
int main()
{
    int X , s=0;
    cin>>X;
    for(int i=2; i<X; i++)
    {
        if(X%i==0) s++; 
    }
    ((s==0)? cout<<"YES" : cout<<"NO");
}