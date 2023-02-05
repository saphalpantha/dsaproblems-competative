// #include <iostream>

// using namespace std;

// int fibo(int n){
//     if(n == 1){
//         return 0;
//     }
//     if(n = 2){
//         return 1;
//     }
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     int ans = fibo(10);
//     cout << ans << endl;
// }





#include <iostream>

using namespace std;
//USING FORLOOPS


int fibo(int n){
    int a = 0;
    int b = 1;
    int sum = 0;
    for(int i=0;i<n;i++){
        a = b;
        b = sum;
        sum = a+b;
    }
    return sum;
}
int main(){
    int ans = fibo(4);
    cout << ans << endl;
}