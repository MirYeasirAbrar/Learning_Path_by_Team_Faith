#include<iostream>
using namespace std;
int main()
{
    int N,s=0,t,r;
    cin>>N;
    t=N;
    while(t!=0)
    {
     r = t%10;
     s = s*10+r;
     t = t/10;
    }
    cout<<s<<endl;
    ((s==N) ? cout<<"YES" : cout<<"NO");
}