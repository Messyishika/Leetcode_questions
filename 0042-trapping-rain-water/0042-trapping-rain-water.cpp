class Solution {
public:
    int trap(vector<int>& height) {
        //applying the two pointer approach
        int n = height.size();
        int left = 0,leftmax = 0,rightmax = 0,ans;
        int right = n-1;
        
        while(left<=right){
            
            if(height[left] <= height[right])
            {
                if(height[left]>=leftmax)leftmax = height[left];
                else
                    ans += leftmax - height[left];
                left++;
            }
            else{
                if(height[right]>=rightmax)rightmax = height[right];
                else
                    ans += rightmax - height[right];
                right--;
            }
        }return ans;
    }
};