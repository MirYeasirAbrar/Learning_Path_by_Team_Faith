#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int mx;
    cin >> mx;
    for(int i=1;i<N;i++)
    {
        int X;
        cin >> X;
        if(X>mx)
        {
            mx=X;
        }
        
        
    }
    cout<< mx <<'\n';
    return 0;
}