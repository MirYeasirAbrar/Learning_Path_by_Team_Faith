#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int y = N/365;
    N = N % 365;
    int m = N/30;
    N = N % 30;
    int d = N;

    cout << y << " years" <<'\n';
    cout << m << " months" << '\n';
    cout << d << " days" << '\n';
}