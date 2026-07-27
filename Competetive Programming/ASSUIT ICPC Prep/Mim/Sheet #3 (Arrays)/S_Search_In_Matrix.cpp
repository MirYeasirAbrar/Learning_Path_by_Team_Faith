#include<iostream>
using namespace std;

int main()
{
    int N,M;
    cin >>N>>M;

    int a[N][M];

    for(int i =0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cin >> a[i][j];
        }
    }

    int X;
    cin >> X;

    bool found = false;

    for(int i = 0; i<N; i++)
    {
        for (int j=0; j<M; j++){
         
            if(a[i][j]==X)
            {
                found = true;
            }
        }
    }
    if(found)
    {
        cout<<"will not take number";
    }
    else{
        cout <<"will take number";
    }
}