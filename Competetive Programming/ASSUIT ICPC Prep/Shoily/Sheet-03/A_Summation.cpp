#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int N; cin>>N;
   long long A[N],S=0;
   for(int i=0; i<N; i++)
{
    cin>>A[i];
     S+=A[i]; 
}
cout<<abs(S);
}