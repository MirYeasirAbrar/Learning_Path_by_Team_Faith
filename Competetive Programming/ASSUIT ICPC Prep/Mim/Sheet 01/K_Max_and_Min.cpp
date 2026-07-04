#include<iostream>
using namespace std;

int main()
{
    long long A,B,C;
    cin>> A >> B >> C;
    if(A <= B && A <= C)
    {
        cout << A << " ";
    }
    else if (B <= C && B <= A)
    {
         cout<< B << " ";

    }
    else if (C <= A && C <= B)
    {
        cout << C << " ";

    }
    if(A >= B && A >= C)
    {
        cout << A ;
    }
    else if ( B >= C && B >= A)
    {
        cout << B;
    }
    else if (C >= A && C>= B)
    {
        cout << C;
    }
    
    

}