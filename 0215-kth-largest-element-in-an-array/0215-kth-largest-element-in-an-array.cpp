class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      priority_queue<int>pq(nums.begin(),nums.end());
        int x ;
        while(k !=1){
           // pq.top();
            pq.pop();
            k--;
        }
        return pq.top();
    }
};