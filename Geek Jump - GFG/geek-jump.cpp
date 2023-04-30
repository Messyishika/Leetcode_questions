//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        if(n<=0)return n;
        int prev = 0;
        int prev2 = 0;
        int curi;
        for(int i = 1;i<n;i++){
        int fs = prev + abs(height[i-1] - height[i]);
        int ss = INT_MAX;
        if(i>1)  ss = prev2 + abs(height[i] - height[i-2]);
        
         curi = min(ss,fs);
        prev2 = prev;
        prev = curi;
        }
        return prev;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends