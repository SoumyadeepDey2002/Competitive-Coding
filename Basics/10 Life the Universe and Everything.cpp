// Question link - https://www.spoj.com/problems/TEST/

#include <bits/stdc++.h>
using namespace std;

    int main()
    {
        int n;
        cin>>n;
        while(n!=42){
            cout<<n<<endl;;
            cin>>n;
        }
        return 0;
    }

    /*
    Alternate Solution -

    while(1){
        if(n == 42){
            break;
        }
        cout<<n;
        cin>>n;
    }
    */