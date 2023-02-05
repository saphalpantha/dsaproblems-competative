// Using the Sieve of Eratosthenes
// Sieve is defined as the way or device used for filtering out wanted from unwanted materials. 
// For example, we find out the prime numbers in a set of numbers and leave out the composite numbers.
/*

for a small value of n

n = 20;

0 1  2  3  4  5  6  7  8  9  10
11 12 13 14 15 16 17 18 19 20


step 0: inititalize all  element as prime 
step 1 : we know 2 are not prime 0,1 so mark these to false;
step 2 : starting from 2 
            if(prime[2]) // true means prime{
                now we have to return the total prime element so increment count
                count++;

                now check for all  the multiple of 2*i and mark as false
                this goes on and on
                
            }

            and return count;


TIME COMPEXITY = N*LOG(LOG(N)) // using taylorr series 



*/



#include <iostream>

#include <vector>

using namespace std;
    int countPrimes(int n) {
        int count=0;
        vector<bool> prime (n+1, true);
        prime[0] = prime[1] = false;
        for(int i=2;i<n;i++){
            if(prime[i]){
                count++;
                for(int j=i*2;j<n;j=j+i){
                    prime[j] = 0;
                }
            }
        }
        return count;
    }