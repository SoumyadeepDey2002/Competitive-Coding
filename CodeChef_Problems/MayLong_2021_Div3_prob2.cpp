/*
link - https://www.codechef.com/MAY21C/problems/LKDNGOLF

number of tiles = N+2 (0 to N+1)
hole at tile number x
ball bounces at length k (0,k,2k,...,)
and back (N+1,N+1-k,N+1-2k,...,)


*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--){
        int N,x,k;
        cin>>N>>x>>k;

        if(x % k == 0){
            cout<<"YES"<<endl;
        }
        else{
            // We will use AP series formula
            double n = ((x-N-1)/(k*-1.0))+1;
            int z = n;
            if(n == (double)z){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }            
        }
    }

    return 0;
}