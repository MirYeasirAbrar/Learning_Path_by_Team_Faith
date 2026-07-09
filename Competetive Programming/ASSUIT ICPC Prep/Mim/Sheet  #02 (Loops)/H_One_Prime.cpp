#include<iostream>
using namespace std;
int main()
{
    int X;
     cin >> X;
     int f=0;
     for(int i=2;i<X;i++)
     {
        if(X%i==0)
        {
            f=1;
        }
        
     }
     if(f==0)
   {
      cout <<"YES"<<'\n';
   }
   else{
      cout<<"NO"<<'\n';
   }
}
