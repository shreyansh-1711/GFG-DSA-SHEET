// class Solution{
//   public:
//   int ans = 0;
//     void solve (Node* root,int k,vector<int>&path){
//            if(root==NULL) return ;

 

//         path.push_back(root->data);

 

//          solve(root->left,k,path);

//          solve(root->right,k,path);

//           int sum=0;

//         for(int i=path.size()-1;i>=0;i--)  {

//            sum+=path[i];

//            if(sum==k) ans++;

//         }

 

//         path.pop_back();
//     }
//     int sumK(Node *root,int k)
//     {
//         // code here 
//         vector<int>path;

        

//       solve(root,k,path);

//       return ans;  
//     }
// };