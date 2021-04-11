#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main() {

    int t; // testcases
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        pattern(n);
    }


    return 0;
  
}
