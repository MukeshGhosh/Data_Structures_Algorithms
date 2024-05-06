// https://www.naukri.com/code360/problems/check-armstrong_589?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

// Problem statement:
// You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.
// Note: An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself.
// For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.


bool checkArmstrong(int n){
	int temp = n, temp1 = n, cnt = 0, res = 0;
	while(temp != 0){
		cnt += 1;
		temp /= 10;
	}
	while(n != 0){
		int d = n % 10;
		res += pow(d,cnt);
		n /= 10;
	}
	if(res == temp1){
		return true;
	}
	return false;
}


// Time Complexity: O(log10N + 1)
// Space Complexity: O(1)
