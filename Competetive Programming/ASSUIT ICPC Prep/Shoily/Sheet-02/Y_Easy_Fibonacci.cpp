#include<iostream>
using namespace std;
int main()
{
    int N,fib=0,t=1,s=0; cin>>N;
    for(int i=0; i<N; i++)
    {
      cout<<fib<<" ";
      s=fib+t;
      fib=t;
      t=s;
    }
}