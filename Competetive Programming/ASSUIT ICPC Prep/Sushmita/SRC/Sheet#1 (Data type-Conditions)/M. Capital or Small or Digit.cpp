#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cin >> ch;
    
    if(ch >= 65 and ch <= 90)
      cout << "ALPHA\nIS CAPITAL" << endl;

    else if(ch >= 97 and ch <= 122)
      cout << "ALPHA\nIS SMALL" << endl;

    else cout << "IS DIGIT" << endl;

}