#include <bits/stdc++.h>
using namespace std;

int x;  //Global Variable - can be used anywhere ,scope is through out the code

int main() {

    x = 5;

    if(x == 5){
        x++;
        x+=4;
        ++x;
    }

    cout<< x--;  //11


    return 0;
  
}
