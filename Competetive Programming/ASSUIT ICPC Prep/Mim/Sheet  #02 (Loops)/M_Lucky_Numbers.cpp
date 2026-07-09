#include<iostream>
using namespace std;
int main()
{
    int A,B,count=0;cin >> A >> B;
    for(int i=A;i<=B;i++)
    {
        int t=i,last;
        while(t)
        {
            last = t%10;
        if(last == 4 || last == 7)
   
        {
           t/=10;
         } 
           else
        {
              break;
          }
       }
                if(t==0)
   {
         cout<<i<< " ";
            count++;

   }
   }
   if(count ==0)
   {
    cout<<"-1";
   }

}