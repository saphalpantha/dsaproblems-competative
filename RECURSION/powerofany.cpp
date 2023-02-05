#include <iostream>


using namespace std;



int power(int a, int b){
    if(b == 0){
        return 1;
    }
    if(a == 0){
        return 0;
    }
    if(b&1){
        return power(a,b/2)*power(a,b/2)*a;
    }
    else{
        return power(a,b/2) * power(a,b/2);
    }
}


int main(){
    cout << "power calculate " << power(2,1) << endl;
}