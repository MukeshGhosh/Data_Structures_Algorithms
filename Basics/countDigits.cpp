// https://www.naukri.com/code360/problems/count-digits_8416387?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int countDigits(int n){
	int result = 0;
	int temp = n;
	while(temp != 0){
		int digit = temp % 10;
		if(digit != 0 && (n % digit == 0)){          // number of digits of ‘n’ that evenly divide ‘n’
			result += 1;
		}
		temp /= 10;
	}
	return result;
}


// int result = floor(log10(n) + 1);   (Optimal approach to count number of digits)
