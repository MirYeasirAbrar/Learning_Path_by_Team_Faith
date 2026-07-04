#include<iostream>
using namespace std;
int main()
{
    char X;
    cin >> X;
    
    if(X>='A' && X<='Z')
    {
        cout << (char)(X+32);
    }
    else 
    {
        cout << (char)(X-32);
    }
}