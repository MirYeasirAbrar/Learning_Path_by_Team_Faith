#include<iostream>
#include<string>

using namespace std;

int main()
{
   int T;
   cin >> T;

   while(T--)
   {
    string S;
    cin >> S;

    bool good = false;

    for(int i = 0 ; i<S.size()-2; i++)
    {
        if((S[i]== '0' && S[i+1]=='1' && S[i+2]=='0') || (S[i] == '1' && S[i+1]=='0' && S[i+2] =='1'))
        {
         good = true;
         break;
        }
        
        }
        if(good)
        {
            cout << "Good\n";
        }
        else{
            cout << "Bad\n";
        }
    }
   }
