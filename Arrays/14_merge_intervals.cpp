class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intr) {
        sort(intr.begin(),intr.end());
        vector<vector<int>> ans;
        ans.push_back(intr[0]);
        for(int i = 1; i < intr.size(); i++){
            if(intr[i][0]>ans[ans.size()-1][1]){
                ans.push_back(intr[i]);
            }else{
                ans[ans.size()-1][1] = max(intr[i][1],ans[ans.size()-1][1]);
            }
        }
        return ans;
    }
};