#include<iostream>
using namespace std;

int main()
{
    double N;
    cin >> N ;

    int x = N;
    if(N==x)
    {
    cout<<"int " << x<<'\n';
    }
    else{
        cout<< "float "<< x <<" "<<N-x<<'\n';
    }


}