class Solution {
public:
//  int solve(int start,int end,vector<int> &slices,int n){
//         if(n == 0 || start > end) return 0;

//         int incl = slices[start] + solve(start+2,end,slices,n-1);
//         int excl = 0 + solve(start+1,end,slices,n);

//         return max(incl,excl);
//     }
    
//     int maxSizeSlices(vector<int>& slices) {
//         int k = slices.size();
//         int case1 = solve(0,k-2,slices,k/3);
//         int case2 = solve(1,k-1,slices,k/3);
//         return max(case1,case2);
//     }
 int solve(int start,int end,vector<int> &slices,int n,vector<vector<int>> &dp){
        if(n == 0 || start > end) return 0;

        if(dp[start][n] != -1) return dp[start][n];
        int incl = slices[start] + solve(start+2,end,slices,n-1,dp);
        int excl = 0 + solve(start+1,end,slices,n,dp);

        dp[start][n] = max(incl,excl);
        return dp[start][n];
    }
    int maxSizeSlices(vector<int>& slices) {
        int k = slices.size();
        vector<vector<int>> dp1(k,vector<int>(k,-1));
        int case1 = solve(0,k-2,slices,k/3,dp1);
        vector<vector<int>> dp2(k,vector<int>(k,-1));
        int case2 = solve(1,k-1,slices,k/3,dp2);
        return max(case1,case2);
    }
};
