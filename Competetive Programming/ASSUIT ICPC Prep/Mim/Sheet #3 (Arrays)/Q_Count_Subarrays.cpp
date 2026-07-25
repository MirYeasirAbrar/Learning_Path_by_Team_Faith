#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans++;  

            for (int j = i + 1; j < n; j++)
            {
                if (a[j] >= a[j - 1])
                    ans++;
                else
                    break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}