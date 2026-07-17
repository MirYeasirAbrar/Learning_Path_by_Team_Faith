#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    long long A[N];

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int left = 0;
    int right = N - 1;

    while(left < right)
    {
        if(A[left] != A[right])
        {
            cout << "NO";
            return 0;
        }

        left++;
        right--;
    }

    cout << "YES";

    return 0;
}