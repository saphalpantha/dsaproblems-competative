

void bottom(stack<int>&stk, int x){
    if(stk.empty()){
        stk.push(x);
        return;
    }
    int val = stk.top();
    stk.pop();
    bottom(stk, x);
    stk.push(val);
}





void solve(stack<int>&st){
    int val;
    if(st.empty()){
        return;
    }
    val =st.top();
    st.pop();
    solve(st);
    bottom(st, val);
    }

void reverseStack(stack<int> &stack) {
    solve(stack);
}