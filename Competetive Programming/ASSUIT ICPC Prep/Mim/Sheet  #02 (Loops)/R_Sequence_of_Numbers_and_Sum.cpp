#include <iostream>
using namespace std;

int main()
{
    int N, M;

    while (cin >> N >> M)
    {
        if (N <= 0 || M <= 0)
        {
            break;
        }

        int start, end;

        if (N < M)
        {
            start = N;
            end = M;
        }
        else
        {
            start = M;
            end = N;
        }

        int sum = 0;

        for (int i = start; i <= end; i++)
        {
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum << '\n';
    }

    return 0;
}