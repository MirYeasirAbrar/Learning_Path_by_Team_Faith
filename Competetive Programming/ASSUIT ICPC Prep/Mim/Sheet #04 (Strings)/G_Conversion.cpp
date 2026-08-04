#include<iostream>
#include<string>
using namespace std;

int main()
{
    string S;
    getline(cin, S);

    for(int i = 0 ; i< S.size(); i++)
    {
        if(S[i]==',')
        {
            S[i] = ' ';
        }
        else if(S[i] >= 'A' && S[i] <= 'Z')
        {
            S[i] = S[i] + 32;
        }
        else if(S[i] >= 'a' && S[i] <= 'z')
       {
        S[i] = S[i] - 32;
       }
        
       
        
    }
  cout << S;
    
}