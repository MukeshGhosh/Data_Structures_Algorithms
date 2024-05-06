// https://www.naukri.com/code360/problems/hcf-and-lcm_840448?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

// You are given two integers 'n', and 'm'. Calculate 'gcd(n,m)', without using library functions.
// Note: The greatest common divisor (gcd) of two numbers 'n' and 'm' is the largest positive number that divides both 'n' and 'm' without leaving a remainder.

// Level: Medium

int calcGCD(int n, int m){
    
    // --------------Brute force---------------------
    // for(int i = min(n,m); i >= 1; i--){
    //     if(n % i == 0 && m % i == 0){
    //         return i;
    //     }
    // }
    // -----------------------------------

    // ---------------Euclidean Algorithm--------------------
    // while(n > 0 && m > 0){
    //     if (n > m) n = n % m;
    //     else m = m % n;
    // }
    // if(n == 0) return m;
    // return n;
    // ------------------------------------------------------
    
    if(m == 0) return n;
    return calcGCD(m, n % m);  // Recursion

}
