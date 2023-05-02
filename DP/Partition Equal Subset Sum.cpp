class Solution{
public:
    bool solve(int index, int N, int arr[], int tar){
        //base case
        if(index>=N){
            return 0;
        }
        if(tar==0){
            return 1;
        }
        if(tar<0){
            return 0;
        }
        int take = solve(index+1, N, arr, tar-arr[index]);
        int notTake = solve(index+1, N, arr, tar);
        return take or notTake;
    }
     bool solveMem(int n,int a[],int tar,vector<vector<int>>&dp){
        if(tar==0) return 1;
        if(n==0) return a[0]==tar;
        if(dp[n][tar]!=-1) return dp[n][tar];
        bool b1 = solveMem(n-1,a,tar,dp);
        bool b2 = 0;
        if(a[n]<=tar)
        b2 = solveMem(n-1,a,tar-a[n],dp);
        return dp[n][tar] = b1|b2;
    }
     int equalPartition(int n, int a[])
    {
        int sum =0;
        for(int i=0;i<n;i++)
            sum+=a[i];
        if(sum&1) return 0;
        int tar = sum/=2;
        vector<vector<int>>dp(n,vector<int>(tar+1,-1));
        return solveMem(n-1,a,tar,dp);
        // return tab(n,a,tar);
        // return SO(n,a,tar);
    }
};
