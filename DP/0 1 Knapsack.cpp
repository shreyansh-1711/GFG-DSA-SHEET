#include <bits/stdc++.h> 

int Rec(vector<int> &weight, vector<int> &value, int n, int W){

    if(n==0){

        if(weight[0]<=W)

            return value[0];

        else

            return 0;

    }

    int incl = 0;

    if(weight[n]<=W)

    incl = value[n] + Rec(weight,value,n-1,W-weight[n]);

    int excl = Rec(weight,value,n-1,W); 

    return max(incl,excl);

}

int Mem(vector<int> &weight, vector<int> &value, int n, int W,vector<vector<int>>&dp){

    if(n==0){

        if(weight[0]<=W)

            return value[0];

        else

            return 0;

    }

    if(dp[n][W]!=-1) return dp[n][W];

    int incl = 0;

    if(weight[n]<=W)

    incl = value[n] + Mem(weight,value,n-1,W-weight[n],dp);

    int excl = Mem(weight,value,n-1,W,dp);  

    return dp[n][W] = max(incl,excl);

}

int tab(vector<int> &weight, vector<int> &value, int n, int W){

    vector<vector<int>> dp(n,vector<int>(W+1,0));

    for(int j = weight[0];j<=W;j++) dp[0][j] = value[0];

        for (int i = 1; i < n; i++) {

          for (int j = 0; j <= W; j++){

              int in = 0;

                if(weight[i]<=j)

                in = value[i] + dp[i-1][j-weight[i]];

              int ex = dp[i-1][j];

              dp[i][j] = max(in,ex);

          }

        }

    return dp[n-1][W];

}

int SO(vector<int> &weight, vector<int> &value, int n, int W){

    vector<int> prev(W+1,0);

    vector<int> curr(W+1,0);

    for(int j = weight[0];j<=W;j++) prev[j] = value[0];

        for (int i = 1; i < n; i++) {

          for (int j = 0; j <= W; j++){

              int in = 0;

                if(weight[i]<=j)

                in = value[i] +prev[j-weight[i]];

                int ex = prev[j];

                curr[j] = max(in,ex);

            }

            for(int k =0;k<=W;k++)

            prev[k] = curr[k];

        }

    return prev[W];

}

int SO2(vector<int> &weight, vector<int> &value, int n, int W){

    vector<int> curr(W+1,0);

    for(int j = weight[0];j<=W;j++) curr[j] = value[0];

        for (int i = 1; i < n; i++) {

          for (int j = W; j >=0 ; j--){

              int in = 0;

                if(weight[i]<=j)

                in = value[i] +curr[j-weight[i]];

                int ex = curr[j];

                curr[j] = max(in,ex);

            }

        }

    return curr[W];

}

int knapsack(vector<int>weight, vector<int> value, int n, int maxWeight) 

{

    // RECURSION

    // return Rec(weight,value,n-1,maxWeight);

    // RECURSION + MEMOIZATION

    // vector<vector<int>>dp(n,vector<int>(maxWeight+1,-1));

    // return Mem(weight,value,n-1,maxWeight,dp);

    // TABULATION

    // return tab(weight,value,n,maxWeight);

    //SPACE OPTIMIZATION --> using two vectors

    // return SO(weight,value,n,maxWeight);

    //SPACE OPTIMIZATION --> using single vector

    return SO2(weight,value,n,maxWeight);

}
