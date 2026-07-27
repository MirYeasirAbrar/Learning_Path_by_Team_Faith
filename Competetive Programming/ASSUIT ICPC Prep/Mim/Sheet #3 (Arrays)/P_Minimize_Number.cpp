#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>> N;

    int a[N];
    
    for(int i=0; i<N; i++ )
    {
        cin >> a[i];
    }

    int ans=100;
    

    for(int i =0; i<N; i++)
    {
        int count = 0;
        while(a[i]%2==0)
        {
            count++;

            a[i]=a[i]/2;
        }

        if(count < ans)
        {
            ans=count;
        }
    }
    cout << ans;
}
