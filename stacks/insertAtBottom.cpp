#include <bits/stdc++.h> 

void solve(stack<int>&stk, int x){
    if(stk.empty()){
        stk.push(x);
        return;
    }
    int val = stk.top();
    stk.pop();
    solve(stk, x);
    stk.push(val);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}
