#include <iostream>
#include <math.h>
using namespace std;


int powof2(int n){
    if(n == 0){
        return 1;
    }
        return 3 *powof2(n-1);
}
int main(){
    int ans = powof2(2);
    cout << ans <<endl;
}