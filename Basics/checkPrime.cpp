// https://www.naukri.com/code360/problems/check-prime_624934?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
// A prime number is a positive integer that is divisible by exactly 2 integers, 1 and the number itself.


bool checkPrime(int n){
  int cnt = 0;
  for(int i = 1; i <= sqrt(n); i++) {
    if(n%i == 0) {
      cnt += 1;
      if(i != n/i) cnt += 1;
    }
  }
  if(cnt == 2) return true;
  return false;
}

// Time Complexity: O(sqrt(N))
// Space Complexity : O(1)
