// Question==>> Count Digit(GeeksForGeeks)

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


class Solution{
public:
    int evenlyDivides(int N){
        //code here
       int temp = N;
       int count = 0;
       
       while(N>0){
           int lastdigit = N%10;
           if(lastdigit>0){
               if(temp%lastdigit == 0){
                   count++;
               }
           }
           N = N/10;
       }
       return count;
    }
};