#include <iostream>
#include <math.h>
using namespace std;
// int main(){
//     int n = -5;
//     int bit;
//     int ans=0;
//     int i = 0;
    
//     while(n!=0 || n<0){
//         bit = n&1;

//         ans = (bit *pow(10,i))+ans;
//         n = n>>1;
//         i++;
        
//     }

//     cout << ans << endl;
//     n = 1010;
//     cout << n<<1;
// }




// using -ve no



int main(){
    int n = -9;
    if(n&1 == 0){
        n = n*(-1);
    }
    int i = 0;
    int myans=0;
    while(!(n == 0 || n == -1)){
        int bit = n&1;
        myans = myans + (bit* pow(bit,i));
        n = n>>1;  
        n = (~n);
        n = n+1;
        i++;
    }
    cout << myans << endl;
}


