// Reverse a number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N = 123;
    int reverse = 0;
    while(N != 0)
    {
        int digit = N % 10;
        reverse = reverse*10 + digit;
        N = N / 10;
    }
    cout << reverse << '\n';
  return 0;
}


// Time Complexity: O(n), where n is the length of the given number
// Space Complexity: O(1)
