#include<iostream>
using namespace std;

int main()
{
    int N,M;
    cin >>N >> M;

    int a[N], b[M];

    for(int i = 0; i<N; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<M;i++)
    {
        cin >> b[i];
    }

    int j=0;

    for(int i =0; i<N; i++)
    {
        if(a[i]==b[j])
        {
            j++;
        }
    }
    if(j==M)
    
        cout << "YES";
    
    else
        cout << "NO";
    


    
}