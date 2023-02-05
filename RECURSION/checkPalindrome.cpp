#include <iostream>

#include <string>
using namespace std;

bool checkPalindrome(string s, int i, int j){
    if(i>j){
        return true;
    }

    if(s[i] != s[j]){
        return false;
    }
    else{
        i++;
        j--;
        return checkPalindrome(s, i, j);

    }
}

int main(){
    string s="aba";
    cout << "is plaindrome " << checkPalindrome(s, 0, s.length()-1);
}