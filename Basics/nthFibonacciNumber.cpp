// https://www.naukri.com/code360/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
//The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
//    F(n) = F(n - 1) + F(n - 2), 
//    Where, F(1) = 1, F(2) = 1

#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n; cin >> n;
        int first = 1, second = 1;
        if(n == 1 || n == 2) cout << 1;
        else{
                for(int i = 3; i <= n; i++){
                        int temp = first;
                        first = second;
                        second += temp;

                }
                cout << second;
        }
}
