#include <iostream>

#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std;


// int main(){
//     string sap="hello world";
//     string f = "world";
//     auto p =  find(sap.begin(), sap.end(), f);
//     if(p!= sap.end()){
//         cout << "found substring at " << (distance(sap.begin(), p)) << endl;
//     }

// }






#include <iostream>
#include <string>


int  findSubstring(string s1, string s2){
    for (size_t i = 0; i < s1.size(); ++i)
    {
        if (s1.substr(i, s2.size()) == s2)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    std::string str = "Hello, World!";
    std::string sub = "Worldiii";
    cout << findSubstring(str, sub);
    // std::cout << "Sub not found" << std::endl;
    return 0;
}
