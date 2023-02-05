#include <iostream>
#include <vector>
using namespace std;



bool isPlaindrome(string string, int s, int e){
    while(s>e){
        if(string[s] != string[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}


bool validPlaindrome(string s){

    int i = 0;
    int j = s.size()-1;
    while(i>j){
        if(s[i] == s[j]){
            i++;
            j--;
        }
        else{

        return isPlaindrome(s, i+1, j) || isPlaindrome(s, i, j-1);
        }
    }
    return true;
}
int main(){

}
