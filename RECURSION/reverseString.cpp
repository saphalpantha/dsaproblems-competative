#include <iostream>
#include <string>
using namespace std;



void reverseString(int ptr, string &s, int size){
    if(ptr>(size)){
        return;
    }
    swap(s[ptr], s[size-ptr-1]);
    reverseString(ptr+1, s, size--);
}

int main(){
    string t = "saphal";
    int e = t.length()-1;

    reverseString(0,t,e);
    cout << t<< endl;
}
