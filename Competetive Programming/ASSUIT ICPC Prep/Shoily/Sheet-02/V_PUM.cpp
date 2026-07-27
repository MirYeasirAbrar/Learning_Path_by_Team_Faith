#include<iostream>
using namespace std;
int main()
{
    int N,s=1; cin>>N;
    for(int i=1; i<=N; i++)
    {
        cout<<s<<" "<<s+1<<" "<<s+2<<" PUM"<<endl;
        s+=4;
    }
}