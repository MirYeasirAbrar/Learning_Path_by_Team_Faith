#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    int A[N];

    for(int i = 0; i< N; i++)
    {
      cin >> A[i];

    }

    int min = A[0];

    for(int i =1; i<N;i++)
    {
        if(A[i]<min)
        {
           min = A[i];
        }
    }
    int count = 0;

    for(int i =0; i<N; i++)
    {
        if(A[i]==min)
        {
            count++;
        }
    }
    if(count%2 == 1)
    {
        cout<< "Lucky";
    }
    else{
        cout<<"Unlucky";
    }
}