#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    char x ;
    cin>>x;
    if (x>='A' && x<='Z')
    {
       x=tolower(x);
    }
    else if (x>='a' && x<='z')
    {
    
        x= toupper(x);
    }
    cout<<x;
}