#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        string s, t;
        cin >> s >> t;

        int mn = min(s.size(), t.size());

        for(int i = 0; i < mn; i++)
        {
            cout << s[i] << t[i];
        }

        for(int i = mn; i < s.size(); i++)
        {
            cout << s[i];
        }

        for(int i = mn; i < t.size(); i++)
        {
            cout << t[i];
        }

        cout << endl;
    }

    return 0;
}