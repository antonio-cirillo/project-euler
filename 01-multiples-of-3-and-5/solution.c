/**
  Input Format:
  First line contains T that denotes the number of test cases. This is followed by T lines, each containing an integer, N.
  Output Format:
  For each test case, print an integer that denotes the sum of all the multiples of 3 or 5 below N.
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long solution(long n) {
     
    if (n < 3)
        return 0;
    
    long sum = 0;    
    
    long r3 = n / 3;
    if (r3 > 1) {
        
        long sumMult = (r3 + 1) * (r3 / 2);
        if (r3 % 2 != 0) sumMult += (r3 + 1) / 2;
        sum += 3 * sumMult;
        
    } else if (r3 == 1)
        sum += 3;
    
    long r5 = n / 5;
    if (r5 > 1) {
        
        long sumMult = (r5 + 1) * (r5 / 2);
        if (r5 % 2 != 0) sumMult += (r5 + 1) / 2;
        sum += 5 * sumMult;
        
    } else if (r5 == 1)
        sum += 5;
    
    long r15 = n / 15;
    if (r15 > 1) {
        
        long sumMult = (r15 + 1) * (r15 / 2);
        if (r15 % 2 != 0) sumMult += (r15 + 1) / 2;
        sum -= 15 * sumMult;
        
    } else if (r15 == 1)
        sum -= 15;
    
    return sum;    
    
}

int main() {
    
    int t; 
    scanf("%d",&t);
    
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        printf("%ld\n", solution(n - 1));
    }
        
    return 0;
    
}
