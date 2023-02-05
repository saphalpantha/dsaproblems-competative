#include <iostream>

#include <stack>
#include <string>
using namespace std;



bool isValid(string s) {
        stack<int>stk;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                stk.push(s[i]);
            }
            else{
                if(!stk.empty()){
                    char top = stk.top();
                    if((top == '(' && s[i] == ')') || (top == '{' && s[i] == '}') || (top == '[' && s[i]  == ']')){
                        stk.pop();
                    }  
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(stk.empty()){
            return true;
        }
        else{
            return false;
        }
    }

int main(){
    string sap = "(())";
    cout << isValid(sap);
    return 0;
}