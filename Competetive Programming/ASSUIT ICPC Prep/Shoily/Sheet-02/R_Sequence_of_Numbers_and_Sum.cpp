#include<iostream>
using namespace std;
int main()
{
    int M,N;
    while(cin>>M>>N){ 
    if(M>0 && N>0)
    {    
        int a = max(M,N);
        int b = min(M,N);
        int s=0; 
        for(int i=b; i<=a; i++)
        {   
            s=s+i;
           cout<<i<<" ";
        }
        cout<<"sum "<<"="<<s<<endl;
    }
    else break;
}
}
