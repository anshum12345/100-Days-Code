// Question==>> Find all factorial numbers less than or equal to N(GFG)

// A number N is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120,
// Given a number N, the task is to return the list/vector of the factorial numbers smaller than or equal to N.

// Example 1:
// Input: N = 3
// Output: 1 2
// Explanation: The first factorial number is 
// 1 which is less than equal to N. The second 
// number is 2 which is less than equal to N,
// but the third factorial number is 6 which 
// is greater than N. So we print only 1 and 2.

// Example 2:
// Input: N = 6
// Output: 1 2 6
// Explanation: The first three factorial 
// numbers are less than equal to N but 
// the fourth factorial number 24 is 
// greater than N. So we print only first 
// three factorial numbers.

// Solution==>>


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<long long> factorialNumbers(long long n) {
        long long fact = 1;
        vector<long long> ans;

        for (int i = 1; fact <= n; i++) {
            ans.push_back(fact);
            fact *= i + 1;
        }

        return ans;
    }
};