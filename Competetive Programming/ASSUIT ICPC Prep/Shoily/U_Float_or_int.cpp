#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
   double N;
   cin>>N;
   if(N== floor(N)) cout <<"int " <<floor(N);
   else cout<<"float "<<floor(N)<<" "<<(N-floor(N));
}