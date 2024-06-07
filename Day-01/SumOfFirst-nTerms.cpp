// Question==>> Sum of first n terms(GFG)

// Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.

// Example 1:
// Input:
// n=5
// Output:
// 225
// Explanation:
// 13+23+33+43+53=225

// Example 2:
// Input:
// n=7
// Output:
// 784
// Explanation:
// 13+23+33+43+53+63+73=784

// Solution==>>

class Solution {
  public:
    long long sumOfSeries(long long n) {
        // code here
        if(n==0){
            return 0;
        }
       long long sum = (n*(n+1)/2);
       return sum*sum;
    }
};