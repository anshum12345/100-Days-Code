<<<<<<< HEAD
// Question=>> Sum of all divisors from 1 to n(GFG)

// Given a positive integer N., The task is to find the value of Σi from 1 to N F(i) where function F(i) for the number i is defined as the sum of all divisors of i.

// Example 1:
// Input:
// N = 4
// Output:
// 15
// Explanation:
// F(1) = 1
// F(2) = 1 + 2 = 3
// F(3) = 1 + 3 = 4
// F(4) = 1 + 2 + 4 = 7
// ans = F(1) + F(2) + F(3) + F(4)
//     = 1 + 3 + 4 + 7
//     = 15

// Example 2:
// Input:
// N = 5
// Output:
// 21
// Explanation:
// F(1) = 1
// F(2) = 1 + 2 = 3
// F(3) = 1 + 3 = 4
// F(4) = 1 + 2 + 4 = 7
// F(5) = 1 + 5 = 6
// ans = F(1) + F(2) + F(3) + F(4) + F(5)
//     = 1 + 3 + 4 + 7 + 6
//     = 21

    // Solution==>>

    class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long sum = 0;
        for(int i=1;i<=N;i++){
            sum+=i*(N/i);
        }
        return sum;
    }
};
=======
// Question=>> Sum of all divisors from 1 to n(GFG)

// Given a positive integer N., The task is to find the value of Σi from 1 to N F(i) where function F(i) for the number i is defined as the sum of all divisors of i.

// Example 1:
// Input:
// N = 4
// Output:
// 15
// Explanation:
// F(1) = 1
// F(2) = 1 + 2 = 3
// F(3) = 1 + 3 = 4
// F(4) = 1 + 2 + 4 = 7
// ans = F(1) + F(2) + F(3) + F(4)
//     = 1 + 3 + 4 + 7
//     = 15

// Example 2:
// Input:
// N = 5
// Output:
// 21
// Explanation:
// F(1) = 1
// F(2) = 1 + 2 = 3
// F(3) = 1 + 3 = 4
// F(4) = 1 + 2 + 4 = 7
// F(5) = 1 + 5 = 6
// ans = F(1) + F(2) + F(3) + F(4) + F(5)
//     = 1 + 3 + 4 + 7 + 6
//     = 21

    // Solution==>>

    class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long sum = 0;
        for(int i=1;i<=N;i++){
            sum+=i*(N/i);
        }
        return sum;
    }
};
>>>>>>> 5fbbe089795bcd936088d887e9daf7433524cf7e
