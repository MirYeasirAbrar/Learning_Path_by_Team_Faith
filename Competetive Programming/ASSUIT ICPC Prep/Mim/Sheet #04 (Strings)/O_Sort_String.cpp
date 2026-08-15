#include <iostream>
using namespace std;

int main()
{
    int N;
    string S;

    cin >> N;
    cin >> S;

    int count[26] = {0};

    for (int i = 0; i < N; i++)
    {
        count[S[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (count[i] > 0)
        {
            cout << char(i + 'a');
            count[i]--;
        }
    }

    return 0;
}