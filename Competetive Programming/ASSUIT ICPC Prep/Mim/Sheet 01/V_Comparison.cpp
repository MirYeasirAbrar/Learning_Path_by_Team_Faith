#include<iostream>
using namespace std;
int main()
{
    int A;char S;int B;cin>>A>>S>>B;
    
    if(S=='>')
    {
        if(A > B)
    {
        cout<<"Right";
    }
    else {
        cout<<"Wrong";
    }
}
    else if(S=='<')
    {
        if(A<B) {
        cout<<"Right";
    }
    else{
        cout<<"Wrong";
    }
}
else if(S== '=')
{
    if(A==B)
    {
        cout<<"Right";
    }
    else{
        cout<<"Wrong";
    }
}
}