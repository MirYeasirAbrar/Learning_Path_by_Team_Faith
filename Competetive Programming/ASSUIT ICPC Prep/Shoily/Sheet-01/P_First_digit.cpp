#include<iostream>
using namespace std;
int main() 
{
   int A;
   cin>>A;
   while(A>=10) A=A/10;
   cout <<((A%2==0)?"EVEN":"ODD");

}