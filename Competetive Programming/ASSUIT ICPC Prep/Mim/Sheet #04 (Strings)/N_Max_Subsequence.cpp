#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string S;
    cin >> S;

    int count = 0;
    char last = '\0';

    for (int i = 0; i < N; i++)
    {
        if (S[i] != last)
        {
            count++;
            last = S[i];
        }
    }

    cout << count << endl;

    return 0;
}