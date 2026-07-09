#include<iostream>
using namespace std;
int main() 
{
    int a ,e=0;
    cin>>a;
        for(int i=2; i<=a; i++)
        {
            if (i%2==0) {
                cout<<i<<endl;
            e++;
        }

        }
        if(e==0) cout<<"-1";
    
}