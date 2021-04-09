#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<< 7 / 2 <<endl;  // int / int = int
    cout<< 7 / 2.0 <<endl; // int / double = double
    cout<< 'c' + 1 <<endl;   //  100

    /*  
Output
3
3.5
100
    */

    // The calculation and the result happens in the higher presedence data type

    /*
                 ^ double
                 | float
                 | long long int
    Increasing   | long int
                 |int 
                 | char
    */
    double a = 3/2.0;
    cout<< a <<endl;   // 1.5

    a = 3/2;  //first the calculation happens 3/2 = 1 ,then it is stored in a as double
    //always the calulation happens first then the storing

    cout<< a; // 1

    return 0;
}