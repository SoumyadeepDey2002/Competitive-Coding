/*
Given rectangle of length l and b. Print area of triangle

constraints :
1 <= l <= 10^9
1 <= b <= 10^9

Input format:
2 space seperated integer l and b

Output Format 
Single number which is area of rectangle

Sample input:
3 4

Sample output:
12

*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    // range of area will be 1e9 * 1e9 = 1e18 ,so long long

    int l,b;
    cin>>l>>b;
    long long area = l * 1LL *  b; //the calculation has to be in ll

    cout<<area;
  
}
