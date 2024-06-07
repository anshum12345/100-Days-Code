<<<<<<< HEAD
// Question=> LCM And GCD(leetcode)

// Given a number N. Count the number of digits in N which evenly divide N.
// Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.

// Example 1:
// Input:
// N = 12
// Output:
// 2
// Explanation:
// 1, 2 both divide 12 evenly

// Example 2:
// Input:
// N = 23
// Output
// 0
// Explanation:
// 2 and 3, none of them
// divide 23 evenly

// Solution==>>

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<long long> lcmAndGcd(long long A, long long B) {
        // Copy A and B to a and b, to keep original values for LCM calculation
        long long a = A, b = B;

        // Using Euclidean algorithm to find the GCD
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }

        long long gcd = a;
        long long lcm = (A * B) / gcd;

        return {lcm, gcd};
    }
};

=======
// Question=> LCM And GCD(leetcode)

// Given a number N. Count the number of digits in N which evenly divide N.
// Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.

// Example 1:
// Input:
// N = 12
// Output:
// 2
// Explanation:
// 1, 2 both divide 12 evenly

// Example 2:
// Input:
// N = 23
// Output
// 0
// Explanation:
// 2 and 3, none of them
// divide 23 evenly

// Solution==>>

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<long long> lcmAndGcd(long long A, long long B) {
        // Copy A and B to a and b, to keep original values for LCM calculation
        long long a = A, b = B;

        // Using Euclidean algorithm to find the GCD
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }

        long long gcd = a;
        long long lcm = (A * B) / gcd;

        return {lcm, gcd};
    }
};

>>>>>>> 5fbbe089795bcd936088d887e9daf7433524cf7e
