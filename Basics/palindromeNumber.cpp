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
