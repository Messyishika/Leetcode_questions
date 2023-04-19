class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi = 0;
        if(nums.size() == 1)return true;
        for(int i = 0;i<nums.size()-1 && maxi>=i;i++){
            maxi = max(maxi,i+nums[i]);
            if(maxi >= nums.size()-1)
                return true;
        }return false;
    }
};