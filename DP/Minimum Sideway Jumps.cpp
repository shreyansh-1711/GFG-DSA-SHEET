class Solution {
public:
    int solveMemoization(vector<int>& obstacles, int currlane, int currPos, vector<vector<int> > &dp) {
    // Base case
    int n = obstacles.size()-1;
    if(currPos == n) {
        return 0;
    }

    if(dp[currlane][currPos] != -1) {
        return dp[currlane][currPos];
    }

    if(obstacles[currPos+1] != currlane) {
        return solveMemoization(obstacles, currlane, currPos+1, dp);
    }
    else {
        // Side ways jump
        int ans = INT_MAX;
        for(int i=1; i<=3; i++) {
            if(currlane != i && obstacles[currPos] != i) {
                ans = min(ans, 1 + solveMemoization(obstacles, i, currPos, dp));
            }
        }
        dp[currlane][currPos] = ans;
        return dp[currlane][currPos];
    }
}
    int minSideJumps(vector<int>& obstacles) {
             vector<vector<int> > dp(4, vector<int> (obstacles.size(), -1));
        return solveMemoization(obstacles, 2, 0, dp); 
    }
};
