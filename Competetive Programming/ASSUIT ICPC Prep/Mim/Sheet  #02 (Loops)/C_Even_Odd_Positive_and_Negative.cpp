#include<iostream>
using namespace std;
int main()
{
 int N;
 cin >> N;

 int even = 0;
 int odd = 0;
 int positive = 0;
 int negative = 0;

  for(int i=0 ; i<N; i++)
  {
    int X;
  cin >> X;
    if(X%2==0)
    {
        even++;
    }
    else{
        
        odd++;
    }
    if(X>0)
    {
        positive++;
    }
     else if(X<0)
     {
       negative++;
    }
}
    cout<<"Even: "<<even<<'\n';
    cout<<"Odd: "<<odd<<'\n';
    cout<<"Positive: "<<positive<<'\n';
    cout <<"Negative: "<<negative<<'\n';

    
  
}