#include<iostream>
using namespace std;
int main()
{
    int N,X,t=0; cin>>N;
    int A[N];
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    cin>>X;
    for(int i=0; i<N; i++)
    {
        if(A[i]==X)
        {
            cout<<i;
            break;
        }
        else t++;
    }
   if (t==N) cout<<"-1";
}