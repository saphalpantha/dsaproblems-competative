#include <iostream>
#include <stack>

using namespace std;



void insertStack(stack<int>&stk, int num){
    if(stk.empty() || (!stk.empty() && stk.top() <num )){
        stk.push(num);
        return;
    }

    int n = stk.top();
    stk.pop();
    insertStack(stk, num);
    stk.push(n);
}

void sortStack(stack<int> &stk){
    if(stk.empty()){
        return;
    }
    int num = stk.top();
    stk.pop();
    sortStack(stk);
    insertStack(stk, num);

}

int main(){

}