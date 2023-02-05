#include <iostream>

#include <vector>
using namespace std;



void moveNegative(vector<int>&arr){
    int s = 0;
    int e = arr.size()-1;
    while(s<e){
        if(arr[s] < 0   && arr[e]>0){
            s++;
            e--;
        }
        else if(arr[s]>0 && arr[e]<0){
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
        else if(arr[s]<0 && arr[e] <0){
            s++;
        }
        else{
            e--;
        }

    }
}

int main(){
    vector<int>arr = {-1,3,-3,2,1,-5,-9,9,9,1};
    moveNegative(arr);
    for(auto a:arr){
        cout << a << " ";
    }
    return 0;
}