// Question=> palindrome number (leetcode)

// Given an integer x, return true if x is a palindrome, and false otherwise.

// Example 1:
// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.

// Example 2:
// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.


// Solution=>>>>
class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0){
            return true;
        }
        if(x<0){
            return false;
        }

        long long number = 0;
        long long original = x;
        while(x>0){
            int digit = x%10;
             number = number*10 + digit;
            x=x/10;
        }
        if(number==original){
            return true;
        }
        return false;
    }
};