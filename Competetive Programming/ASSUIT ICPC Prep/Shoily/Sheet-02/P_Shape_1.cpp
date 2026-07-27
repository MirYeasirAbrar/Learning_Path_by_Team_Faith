#include<iostream>
using namespace std;
int main()
{
 int N; cin>>N;
  while(N>0)
   {
      for(int j=N; j>0; j--)
      {
        cout <<"*";
      }
      cout<<'\n';
      N--;
   }
}