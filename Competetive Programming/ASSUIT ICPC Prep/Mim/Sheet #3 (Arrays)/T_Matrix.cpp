#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int N;
    cin>> N;

    int a[N][N];

    for(int i = 0; i<N; i++){
        for(int j = 0 ; j<N; j++){
            cin >>a[i][j];
        }

    }
    int primary = 0;
    int secondary = 0;

    for(int i = 0; i<N; i++){
        
        
            primary += a[i][i];
            secondary += a[i][N-1-i];
        
    }
    cout << abs(primary - secondary);
}