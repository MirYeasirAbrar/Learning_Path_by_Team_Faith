#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int N;
        cin>> N;
        int count = 0;
        
        while(N>0)
        {
            if(N%2==1)
            
                count++;
                N/=2;
                 

            }
            cout << (1 << count)-1<<endl;
        }
    }
