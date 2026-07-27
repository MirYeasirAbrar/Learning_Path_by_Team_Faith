#include<iostream>
using namespace std;
int main()
{
    int T,X,Y; cin>>T;
    while(T--){
        cin>>X>>Y;
        int s=0;
        int a=max(X,Y);
        int b=min(X,Y);
        for(int i=b+1; i<a; i++){
            if(i%2!=0){
                s+=i;
            }
        }
        cout<<s<<endl;
    }
}