#include<iostream>
#include<iomanip>
const double PI = 3.141592653;
using namespace std;
int main(){
    double R , Area;
    cin>>R;
    Area = PI * R * R;
    cout << fixed << setprecision(9) << Area;

}