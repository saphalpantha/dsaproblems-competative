#include <iostream>
#include <vector>

#include <numeric>
using namespace std;


int main(){
    vector<int>numbers(100);
    iota(numbers.begin(), numbers.end(), 2);

    for(auto i:numbers){
        cout << i << " ";
    }
}