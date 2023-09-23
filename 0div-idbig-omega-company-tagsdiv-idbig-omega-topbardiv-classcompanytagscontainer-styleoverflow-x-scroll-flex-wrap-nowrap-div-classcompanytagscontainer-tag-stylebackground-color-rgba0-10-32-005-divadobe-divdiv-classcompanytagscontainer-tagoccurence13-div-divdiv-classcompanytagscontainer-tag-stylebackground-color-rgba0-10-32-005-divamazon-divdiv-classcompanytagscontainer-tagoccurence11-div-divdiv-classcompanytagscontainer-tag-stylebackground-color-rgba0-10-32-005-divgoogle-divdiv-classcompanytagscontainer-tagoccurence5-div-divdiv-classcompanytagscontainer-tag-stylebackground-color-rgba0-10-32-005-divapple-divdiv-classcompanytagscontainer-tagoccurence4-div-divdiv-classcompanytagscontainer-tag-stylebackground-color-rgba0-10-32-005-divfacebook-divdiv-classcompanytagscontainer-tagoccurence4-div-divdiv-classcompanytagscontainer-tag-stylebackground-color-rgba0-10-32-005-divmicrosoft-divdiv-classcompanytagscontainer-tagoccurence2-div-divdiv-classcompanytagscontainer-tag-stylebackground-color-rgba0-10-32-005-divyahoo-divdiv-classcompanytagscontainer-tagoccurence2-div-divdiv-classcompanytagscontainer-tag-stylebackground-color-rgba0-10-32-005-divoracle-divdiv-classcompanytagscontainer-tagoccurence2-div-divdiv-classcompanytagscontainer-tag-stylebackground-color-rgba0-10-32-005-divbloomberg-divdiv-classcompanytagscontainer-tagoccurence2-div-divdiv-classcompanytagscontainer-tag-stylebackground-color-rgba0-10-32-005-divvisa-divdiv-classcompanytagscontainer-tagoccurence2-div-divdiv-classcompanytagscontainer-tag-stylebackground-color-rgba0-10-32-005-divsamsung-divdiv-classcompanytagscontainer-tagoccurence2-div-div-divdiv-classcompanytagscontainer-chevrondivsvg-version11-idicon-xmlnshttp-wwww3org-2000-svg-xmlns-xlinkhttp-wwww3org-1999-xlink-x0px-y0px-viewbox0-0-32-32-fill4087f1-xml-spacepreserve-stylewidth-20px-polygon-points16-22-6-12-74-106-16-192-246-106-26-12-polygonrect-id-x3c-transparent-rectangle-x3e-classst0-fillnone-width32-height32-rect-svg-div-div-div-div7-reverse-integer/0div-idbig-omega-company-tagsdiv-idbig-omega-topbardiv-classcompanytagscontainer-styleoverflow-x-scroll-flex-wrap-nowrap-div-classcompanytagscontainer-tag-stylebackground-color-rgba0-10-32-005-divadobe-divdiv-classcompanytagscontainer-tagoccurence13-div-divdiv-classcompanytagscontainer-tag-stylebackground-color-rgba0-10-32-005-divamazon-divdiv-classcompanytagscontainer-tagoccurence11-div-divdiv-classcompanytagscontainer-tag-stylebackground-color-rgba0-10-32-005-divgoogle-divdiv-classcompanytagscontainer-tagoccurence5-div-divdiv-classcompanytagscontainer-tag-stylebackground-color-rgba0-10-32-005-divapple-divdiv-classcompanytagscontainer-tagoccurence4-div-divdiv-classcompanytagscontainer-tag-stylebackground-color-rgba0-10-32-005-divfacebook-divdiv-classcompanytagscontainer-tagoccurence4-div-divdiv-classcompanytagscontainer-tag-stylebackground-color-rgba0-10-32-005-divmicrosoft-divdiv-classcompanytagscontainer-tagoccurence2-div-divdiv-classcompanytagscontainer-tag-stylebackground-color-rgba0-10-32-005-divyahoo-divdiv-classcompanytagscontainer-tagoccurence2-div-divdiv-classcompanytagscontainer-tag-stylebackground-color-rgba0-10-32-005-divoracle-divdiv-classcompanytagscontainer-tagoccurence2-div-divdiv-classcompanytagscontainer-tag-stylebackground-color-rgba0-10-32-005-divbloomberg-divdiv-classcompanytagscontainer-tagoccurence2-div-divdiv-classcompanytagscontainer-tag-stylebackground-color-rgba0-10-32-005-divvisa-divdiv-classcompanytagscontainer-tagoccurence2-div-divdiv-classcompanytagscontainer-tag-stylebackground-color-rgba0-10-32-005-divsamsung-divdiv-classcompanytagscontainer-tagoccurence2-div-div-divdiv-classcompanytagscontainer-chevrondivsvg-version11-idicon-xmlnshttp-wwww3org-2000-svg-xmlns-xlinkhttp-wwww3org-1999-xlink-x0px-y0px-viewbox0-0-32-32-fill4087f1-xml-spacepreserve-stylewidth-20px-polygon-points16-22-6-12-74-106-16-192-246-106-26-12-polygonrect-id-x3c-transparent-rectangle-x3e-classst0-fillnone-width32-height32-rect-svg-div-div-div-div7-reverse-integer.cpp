class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        int dig;
        int n = x;
        while(n != 0){
            dig = n%10;
            if((rev > INT_MAX/10)||(rev<INT_MIN/10)){
                return 0;}
            rev = (rev*10) + dig;
            n = n/10;
        }return rev;
    }
};