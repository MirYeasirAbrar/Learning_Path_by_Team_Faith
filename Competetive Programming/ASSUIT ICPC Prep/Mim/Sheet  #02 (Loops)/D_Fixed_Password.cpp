#include<iostream>
using namespace std;
int main()
{
    int X;

    while(true)
    {
        cin >> X;
        
        if(X== 1999)
        {
            cout<<"Correct";
            break;
        }
        else{
            cout<<"Wrong" <<'\n';
        }
    }

}