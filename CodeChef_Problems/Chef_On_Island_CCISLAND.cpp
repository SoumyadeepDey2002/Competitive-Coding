/*
Problem link - https://www.codechef.com/START3C/problems/CCISLAND

x = food supply chef has
y = water supply chef has
xr and yr at minimal every day
D = days needed to build boat
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){

    double x,y,xr,yr,D;
    cin>>x>>y>>xr>>yr>>D;

    double x_last = x/xr;
    double y_last = y/yr;

    double days_he_will_last = min(x_last,y_last);
    
    if(days_he_will_last >= D){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }

    return 0;
}