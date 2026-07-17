#include <iostream>
using namespace std;
int main() {
    int A, B; cin>>A>>B;
    while(B!=0)
    {
        int t=B;
        B=A%B;
        A=t;
    }
    cout<<A;
}
