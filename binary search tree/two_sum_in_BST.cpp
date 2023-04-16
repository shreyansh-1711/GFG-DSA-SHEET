// void InorderTra(BinaryTreeNode<int>* root, vector<int> &in){
//     if(root==NULL){
//         return ;
//     }
//     InorderTra(root->left, in);
//     in.push_back(root->data);
//     InorderTra(root->right, in);

// }

// bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
// 	//Write your code here
//     vector<int> inorder;
//     InorderTra(root, inorder);
//     int i=0, j=inorder.size()-1;
//     while(i<j){
//         int sum = inorder[i]+inorder[j];
//         if(sum == target){
//             return true;
//         }else if(sum>target){
//             j--;
//         }else{
//             i++;
//         }
//     }
//     return false;

// }