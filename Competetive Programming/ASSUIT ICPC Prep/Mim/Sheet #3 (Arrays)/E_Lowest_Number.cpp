#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];

    for(int i = 0; i<N; i++)
    {
        cin >> A[i];


    }
    int minvalue = A[0];
    int pos = 1;


    for(int i = 1; i< N ; i++)
    {
        if(A[i] < minvalue)
        {
           minvalue = A[i];
           pos=i+1;
        }
    }
    cout<< minvalue << " " << pos<<endl;
}