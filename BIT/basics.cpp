#include <iostream>

using namespace std;
/*

basic bits = & , | , ^
            and  or  xor


shifting_operator - <<      >>
                    left  right

*/



// int main(){
//     int a = 16; //100;
//     for(int i=0;i<10;i++){
//         cout << (a<<i) << endl; // left shifting
//         cout << (a>>i) << endl; // right shifting
//     }
//     cout << endl;
// }












// check set bit or not

// int main(){
//     int n = 9;// 1001
//     int pos = 3;
//     if((n &(1<<pos)) > 0){
//         cout << "bit set" << endl;
//     }
//     else{
//         cout << "not set bit" << 1<<pos << endl;
//     }


// }


// find the xor of all the number in array where the ith bit is set or not


// int main(){
//     int arr[6] = {2,3,5,6,1,9};
//     int pos = 1;
//     int arr2[6];
//     int k = 0;
//     for(int i=0;i<6;i++){
//         if((arr[i]&(1<<pos)) > 0){
//             arr2[k] = arr[i];
//             k++;

//         }
//     }

//     for(int i=0;i<6;i++){
//         cout << (arr2[i]^arr[i+1]) << endl;
//     }
// }



// find min occurance in array

// int main(){
//     int arr[6] = {1,3,5,6,7,8};
//     int ans = 0;
//     for(int i=0;i<10;i++){
//         ans = ans&arr[i];
//     }
//     cout << (ans) << endl;   
// }


/*
0010
0011
0101
0110
0001
1001


xor

010
011
001
110
111
*/



// =================================================================

// fibonacci of nth term

// 0 1 1 2 3 5 8. ..... 

// int main(){
//     int a = 0;
//     int b = 1;
//     for(int i=0;i<100;i++){
//         int sum = a + b;
//         cout << sum << " ";
//         a = b;
//         b = sum;
//     }
//     return 0;
// }


// check prime no


// int main(){
//     for(int i=2;i<100;i++){
//         if((i%7!=0)){
//             printf("not prime");
//         }
//         else{
//             cout << "prime " << endl;
//         }
//     }
// }



////////////////////// count the no of set bits






// int main(){
//     int n = 9;
//     int count = 0;
//     while(n!=0){
//         if((n>>1)==1){
//             count++;
//             n = n>>1;
//         }
//     }

//     cout << "no of set bits " << count << endl;
// }




// swapping of two numbers

/*

0101
1001

1100
1001
0101 => 5
12

a = a^b
b = 5
a = a^b => 5^

0101
1001
1100 => a =  12

1100
1001
0101 => b =  5

1100
0101
1001 => a =  9
*/




// int main(){
//     int a = 50000;
//     int b = 90000;
//     a = a^b;
//     b = a^b;
//     a = a^b;
//     cout << a <<  " " << b << endl;
//     return 0;
// }




 
