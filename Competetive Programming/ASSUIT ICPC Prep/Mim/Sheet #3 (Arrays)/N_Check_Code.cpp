#include <iostream>
using namespace std;

int main() {
    int A, B;
    string S;
    cin >> A >> B >> S;
    
    if ((int)S.size() != A + B + 1) {
        cout << "No\n";
        return 0;
    }
    
    if (S[A] != '-') {
        cout << "No\n";
        return 0;
    }
    for (int i = 0; i < (int)S.size(); i++) {
        if (i == A) continue;
        if (!isdigit(S[i])) {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}