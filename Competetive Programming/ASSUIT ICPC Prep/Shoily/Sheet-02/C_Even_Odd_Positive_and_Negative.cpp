#include<iostream>
using namespace std;
int main() 
{
    int N,e=0,o=0,p=0,n=0;
    cin>>N;
    while(N--)
    {
        int a;
        cin>>a;
        if(a%2==0) e++;
        if(a%2!=0) o++;
        if(a>0) p++;
         if(a<0) n++;
    }
    cout<<"Even: "<<e<<endl<<"Odd: "<<o<<endl<<"Positive: "<<p<<endl<<"Negative: "<<n;

}