/*
link - https://www.codechef.com/MAY21C/problems/SOLBLTY
if temp increases by 1 solubility increases by B
initial - 1L water , X degrees , Solubility A

max temp = 100 degrees
Inputs - X, A, B
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){

    int X,A,B;
    cin>>X>>A>>B;

    int increase = (100 - X) * B;

    int S = A + increase;

    // S is final solubility in g/100ml
    // in g/L

    S = S * 10;

    cout<<S<<endl;
    }
    

    return 0;
}
