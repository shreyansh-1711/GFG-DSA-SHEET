
class Solution
{
    public:
    // int solve(int n, int a[], int curr, int prev){
    //     if(curr==n){
    //         return 0;
    //     }
        
    //     int take=0;
    //     if(prev==-1 || a[curr] > a[prev]){
    //             take = 1+solve(n,a,curr+1, curr);
    //     }
        
    //     int notTake=0+solve(n,a,curr+1,prev);
    //     return max(take, notTake);
    // }
    
    // int solveMem(int n, int a[], int curr, int prev, vector<vector<int>>& dp){
    //     // if(curr==n){
    //     //     return 0;
    //     // }
    //     // if(dp[curr][prev+1]!=-1){
    //     //     dp[curr][prev+1];
    //     // }
        
    //     // int take=0;
    //     // if(prev==-1 || a[curr] > a[prev]){
    //     //         take = 1+solveMem(n,a,curr+1, curr,dp);
    //     // }
        
    //     // int notTake=0+solveMem(n,a,curr+1,prev,dp);
    //     // dp[curr][prev+1] = max(take, notTake);
    //     // return dp[curr][prev+1];
        
    //      if(curr == n)

    //         return 0;

    //     if(dp[curr][prev+1]!=-1){

    //         return dp[curr][prev+1];

    //     }

    //     include condition

    //     int take=0;

    //     if(prev==-1 or a[curr]>a[prev]){

    //         take=1+solveMem(n,a,curr+1,curr,dp);

    //     }

    //     // exclude condition

    //     int notTake=0+solveMem(n,a,curr+1,prev,dp);

    //     return dp[curr][prev+1]=max(take,notTake);

    // }

    // int longestSubsequence(int n, int a[]){

    //     vector<vector<int>>dp(n,vector<int>(n+1,-1));

    //     return solveMem(n,a,0,-1,dp);
    // }
    
    
    
    // //Function to find length of longest increasing subsequence.
    // int longestSubsequence(int n, int a[])
    // {
    //   // your code here
    // //   return solve(n,a,0,-1);
    // vector<vector<int>> dp(n, vector<int> (n+1, -1));
    // return solveMem(n,a,0,-1,dp);
    // }
    int solveMem(int n, int a[], int curr, int prev, vector<vector<int>>&dp){

        if(curr == n)

            return 0;

        if(dp[curr][prev+1]!=-1){

            return dp[curr][prev+1];

        }

        // include condition

        int take=0;

        if(prev==-1 or a[curr]>a[prev]){

            take=1+solveMem(n,a,curr+1,curr,dp);

        }

        // exclude condition

        int notTake=0+solveMem(n,a,curr+1,prev,dp);

        return dp[curr][prev+1]=max(take,notTake);

    }
    
    int solveTab(int n, int a[]){
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int curr=n-1; curr>=0; curr--){
            for(int prev=curr-1; prev>=-1; prev--){
                
                int take=0;
        
                if(prev==-1 or a[curr]>a[prev]){
        
                    take=1+dp[curr+1][curr+1];
        
                }
        
                // exclude condition
        
                int notTake=0+dp[curr+1][prev+1];
        
             dp[curr][prev+1]=max(take,notTake);

            }
        }
        return dp[0][0];
    }
        int solveoptimal(int n, int a[]){
        if(n==0){
            return 0;
        }
        vector<int> ans;
        ans.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i]>ans.back()){
                ans.push_back(a[i]);
            }else{
                int index = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
                ans[index] = a[i];
            }
        }
        return ans.size();
    }

    int longestSubsequence(int n, int a[]){

        // vector<vector<int>>dp(n,vector<int>(n+1,-1));

        // return solveMem(n,a,0,-1,dp);
        return solveTab(n,a);

    }
};
