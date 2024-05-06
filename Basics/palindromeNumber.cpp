// https://www.naukri.com/code360/problems/palindrome-number_624662?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
// Check whether a given number ’n’ is a palindrome number.
// Note : Palindrome numbers are the numbers that don't change when reversed.

bool palindrome(int n)
{
    int rev = 0, temp = n;
    while(temp != 0){
        int d = temp % 10;
        rev = rev * 10 + d;
        temp /= 10;
    }
    if(rev == n){
        return true;
    }
    return false;
}


// Time Complexity: O(log10N + 1) where N is the input number. The time complexity is determined by the number of digits in the input integer N. 
//                  In the worst case when N is a multiple of 10 the number of digits in N is log10 N + 1.
// Space Complexity: O(1) as only a constant amount of additional memory for the reversed number regardless of size of the input number.
