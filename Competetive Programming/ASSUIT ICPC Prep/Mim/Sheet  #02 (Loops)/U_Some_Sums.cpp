#include<iostream>
using namespace std;
int main()
{
    int N,A,B;
    cin>>N>>A>>B;

    int ans = 0;

    for(int i=1;i<=N;i++)
    {
        int num = i;
        int sum = 0;

        while(num>0)
        {
            sum+=num%10;
            num/=10;

        }
        if(sum>= A && sum <= B)
        {
            ans+=i;
        }
    }
    cout<<ans<<'\n';
}