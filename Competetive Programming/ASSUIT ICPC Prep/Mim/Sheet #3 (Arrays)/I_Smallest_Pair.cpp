#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[105];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int ans = 2147483647; // large number

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int value = A[i] + A[j] + (j - i);
                if (value < ans) {
                    ans = value;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}