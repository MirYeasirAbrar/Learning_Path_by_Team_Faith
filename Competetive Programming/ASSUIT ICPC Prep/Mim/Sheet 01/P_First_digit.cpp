#include<iostream>
using namespace std;

int main()
{
    int X;
    cin >> X;
    int A = X/1000;

    if(A % 2 == 0)
    {
        cout << "EVEN" <<'\n';
    }
    else{
        cout << "ODD" << '\n';
    }
}