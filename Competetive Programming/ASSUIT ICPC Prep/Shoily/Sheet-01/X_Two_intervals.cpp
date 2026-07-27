#include<iostream>
using namespace std;
int main()
{
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    int X = max(A,C);
    int Y = min(B,D);
    if(X<=Y) cout <<X<<" "<<Y;
    else cout<<"-1";
}