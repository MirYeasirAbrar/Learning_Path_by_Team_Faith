#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int a[N],b[N];

    for(int i=0; i<N; i++)
    {
        cin >> a[N];
    }
    for(int i=0; i<N; i++)
    {
        cin >> b[N];
    }
    
    sort(a,a + N);
    sort(b,b + N);

    bool same = true;

    for(int i =0; i<N; i++)
    {
        if(a[i] != b[i])
        {
            same = false;
            break;
        }
    }
    if(same)
    
        cout << "yes";
    else
    cout<< "no";

    return 0;


}