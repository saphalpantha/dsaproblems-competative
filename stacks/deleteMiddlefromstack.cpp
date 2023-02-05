#include <bits/stdc++.h> 



void solve(stack<int>&stk, int N, int count){
   if(count == N/2){
      stk.pop();
      return;
   }

   int val = stk.top();
   stk.pop();
   solve(stk, N , count+1);
   stk.push(val);

}
void deleteMiddle(stack<int>&inputStack, int N){
   solve(inputStack,N, 0);
   
}