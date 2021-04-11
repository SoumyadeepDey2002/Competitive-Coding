#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i==5 && j==5){
                cout<<i<<" "<<j<<" ";
                break;
            }
        }
        cout<< "i = "<< i <<endl;
    }
    // when java encounters break the loop in which break is located is finished completely but any outer loop will still run
    /*
i = 0
i = 1
i = 2
i = 3
i = 4
5 5 i = 5
i = 6
i = 7
i = 8
i = 9
    */

    //continue takes execution back to the loop condition and skips the lines under it within that loop

    for(int i = 0;i < 10;i++){
        if(i == 8){
            continue;  //goes back to line 31
        }
        cout << i <<endl;
    }

    return 0;
}