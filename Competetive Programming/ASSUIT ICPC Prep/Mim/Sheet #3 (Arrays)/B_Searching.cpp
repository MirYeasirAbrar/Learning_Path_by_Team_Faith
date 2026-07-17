#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    long long A[N];

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    
    long long  X; 
    cin >> X;

    for(int i = 0; i < N; i++)
 {
    if(A[i] ==X)
    {
        cout<< i;
        return 0;
    }
    
}
cout << -1;
return 0;

}


