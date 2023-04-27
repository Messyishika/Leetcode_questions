class Solution {
public:
    int bulbSwitch(int n) {
        if(n == 0)return 0;
        int curr = 3;
        int idx = 1;
        long long total = 0;
        while(total<n){
            total+=curr;
            curr+=2;
            idx++;
        }return idx-1;
    }
};