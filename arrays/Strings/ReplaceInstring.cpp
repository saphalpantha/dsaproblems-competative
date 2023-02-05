#include <iostream>
using namespace std;
#include <string>
string replaceSpaces(string &str){
    string res= "";
    for(int i=0;i<str.size();i++){
        if(str[i] == ' '){
            res.push_back('@');
            res.push_back('4');
            res.push_back('0');
        }
        else{
            res.push_back(str[i]);
        }
    }
    return res;
}

int main(){
    string s = "hello world";
    cout << replaceSpaces(s) << endl;
}