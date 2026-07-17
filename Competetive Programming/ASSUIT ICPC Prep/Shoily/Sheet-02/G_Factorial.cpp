#include<iostream>
using namespace std;
int main()
{
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        long long S = 1;
        for(int i=1; i<=N; i++){
        S= S*i;
        }
        cout<<S<<endl;
    }
}