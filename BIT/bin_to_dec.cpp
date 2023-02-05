#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n = 101;
    int res=0;
    int i = 0;
    while(n!=0){
        
        int digit = n%10;
        if(digit == 1){
            res += digit * pow(2,i);
        }
        n = n/10;
        i++;
    }
    cout << res << endl;
    return 0;
}