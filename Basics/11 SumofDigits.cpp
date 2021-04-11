// Question link - https://www.codechef.com/problems/FLOW006

#include <bits/stdc++.h>
using namespace std;

int sumofdigits(int n){
    int sum = 0;
    while(n!=0){
        int last_digit = n%10;
        sum+= last_digit;
        n = n/10;
    }
    return sum;
}

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        cout<<sumofdigits(n)<<endl;
    }

    return 0;
}
