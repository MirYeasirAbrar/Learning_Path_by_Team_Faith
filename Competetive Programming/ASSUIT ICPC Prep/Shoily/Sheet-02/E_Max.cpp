#include<iostream>
using namespace std;
int main() 
{
    int N,s=0;
    cin >>N ;
    while (N--)
    {
        int x;
        cin>>x;
        if(x>s) s=x;
    }
    cout<<s;
}