#include<iostream>
#include<iomanip>
using namespace std;

#define PI 3.141592653


int main()

{
   double R;

   cin >> R;

   double Area = PI * R * R;

   cout << fixed << setprecision(9) << Area << '\n';
}

