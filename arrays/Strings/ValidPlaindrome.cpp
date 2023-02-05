

#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    if(s.empty()){
        return true;
    }
    while (i < j)
    {
        while (i <= s.size() && !isalnum(s[i]))
        {
            i++;
        }
        while (j >= s.size() && !isalnum(s[j]))
        {
            j--;
        }
        if (islower(s[i]) != islower(s[j]))
        {
            return false;
        }
        else
        {

            i++;
            j--;
        }
    }
    return true;
}

int main(){
    // char *input = "A man, a plan, a canal: Panama";
    string input = "mom";
    cout << isPalindrome(input);
    

}