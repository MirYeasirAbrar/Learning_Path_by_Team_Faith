#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if(N==1)
    {
        cout<< 0;
    }
    else if(N==2)
    {
        cout << 1;
    }
    else{
        long long a=0, b=1, c;

        for(int i=3; i<=N; i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        cout<< b;
    }
}