#include <iostream>
#include <string>
#include <vector>

//  Letter Combinations of a Phone Number
// 
using namespace std;

void solve(string digits, string output, vector<string>&ans,int index, vector<string>store){
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }

    int num = digits[index] - '0';
    string temp = store[num];
    for(int i=0;i<temp.length();i++){
        output.push_back(temp[i]);
        solve(digits, output, ans, index+1, store);
        output.pop_back();
    }
}


vector<string> letterCombinations(string digits) {
        vector<string> store = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string output="";
        vector<string>ans;
        int index = 0;
        
        if(digits.length() == 0){
            return ans;
        }
        solve(digits, output, ans, index, store);
        return ans;
}

int main(){

}