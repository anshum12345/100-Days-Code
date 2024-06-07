// Q) Count Digit(GeeksForGeeks)==============???????????????

// Given a number N. Count the number of digits in N which evenly divide N.

// Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.
 

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