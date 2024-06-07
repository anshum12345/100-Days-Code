// Q) Reverse Number (Leetcode)=====>>>>>>>>>>>>>>>>

// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

#include <climits> // for INT_MAX and INT_MIN
class Solution {
public:
    int reverse(int x) {
        if(x==0){
            return 0;
        }

        long long reverseNumber = 0;
        while(x>0 || x<0){
            long long lastdigit = x%10;
          reverseNumber = (reverseNumber*10) + lastdigit;
            x = x/10;
            
        }
        if(reverseNumber>INT_MAX || reverseNumber<INT_MIN){
            return 0;
        }
        return reverseNumber;
    }
};


// explanation==>
