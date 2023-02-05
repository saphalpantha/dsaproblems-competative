#include <iostream>

using namespace std;


int count(int n){
    if(n < 0){
        return 0;
    }
    if( n == 0 ){
        return 1;
    }
    int sum = 0;

        int a = 0;
        int b = 1;
    for(int i=0;i<=n;i++){
        a = b;
        b = sum;
        sum = a+b;

    }
    return sum;
}
int main(){

    int ans = count(5);
    cout << ans << endl;
    return 0;
}
