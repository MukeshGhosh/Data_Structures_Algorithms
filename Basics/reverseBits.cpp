// https://www.naukri.com/code360/problems/reverse-bits_2181102?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

long reverseBits(long n) {
    int pow = 31;
    long reverse = 0;
    for(int i = 0; i <= 31; i++){
        reverse<<=1;
        reverse += (n&1);
        n>>=1;
    }
    return reverse;
}
