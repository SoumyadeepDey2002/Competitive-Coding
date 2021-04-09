#include<bits/stdc++.h>
using namespace std;

int main()
{
   // int, char, long int, long long int, float, double

   /*

   -10^9 < int < 10^9  
   -10^12 < long int < 10^12
   -10^18 < long long < 10^18

   */

   int a = 100000;
   int b = a*a;

   cout<<b<<endl; // 10^10 didn't print as b got overflowed 

   // So we will force the calculaion in long long

   long int c = a * 1LL * a;   //  10^10

   // 1LL is 1 in long long

   cout << c <<endl;
   
   int mx = INT_MAX;
   cout << mx << " " << mx+1<<endl;
   cout << INT_MIN <<endl;


    return 0;
}