// https://www.naukri.com/code360/problems/sum-of-all-divisors_8360720?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
// Find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to ‘n’.

int sumHelper(int n){
	int sum = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			sum += i;
			if(i != n/i) sum += (n/i);
		}
	}
	return sum;
}

int sumOfAllDivisors(int n){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += sumHelper(i);
	}	
	return sum;
}

// Time Complexity: O(sqrt(N))
