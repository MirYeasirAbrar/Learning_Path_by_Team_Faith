#include<iostream>
using namespace std;
int main()
{
    int N; cin >> N;
    for(int i=2;i<=N;i++)
    { 
        int f = 0;
        for(int j=2;j<i;j++)
        {
           if(i%j==0)
           {
            f = 1;
            break;
           }
        }
        if(f==0)
        {
            cout<<i<<" ";
        }
    }
    cout << '\n';
}