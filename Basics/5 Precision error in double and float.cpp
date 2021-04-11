#include <bits/stdc++.h>
using namespace std;
int main() {
   // double can store even larger values than long long ,so why dont we just use it, because even though it stores large numbers it sacrifices accuracy

   double a = 100000;
   double c = a*a;

   cout<< c <<endl;
   cout<< fixed << c <<endl;
   cout<< fixed << setprecision(0) << c <<endl;

   c = 1e24;
   cout<< c; //doesn't print accurately

   /*
   1e+10
   10000000000.000000
   10000000000
   999999999999999983222784
   */

}
