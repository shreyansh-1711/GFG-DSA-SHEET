// void solve(Node* root, vector<int> &ans, int lvl){
//     if(root==NULL){
//         return ;
//     }
    
//     if(lvl == ans.size()){
//         ans.push_back(root->data);
//     }
//     solve(root->left, ans, lvl+1);
//     solve(root->right, ans, lvl+1);
    
// }

// //Function to return a list containing elements of left view of the binary tree.
// vector<int> leftView(Node *root)
// {
//    // Your code here
//    vector<int> ans;
//    solve(root, ans ,0);
//    return ans;
// }
