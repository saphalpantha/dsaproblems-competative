#include <iostream>
#include <math.h>

using namespace std;


int fastExpo(int a, int b){
    if(b %2 == 0){
        return pow(pow(a,b/2),2);
    }
    else{
        return pow(pow(a,b/2),2)*a;
    }
}


int main(){
    cout << fastExpo(2,3) << endl;
}