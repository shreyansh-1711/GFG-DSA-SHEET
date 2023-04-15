// Recursive

// bool searchInBST(BinaryTreeNode<int> *root, int x) {
//     // Write your code here.
//     if(root==NULL){
//         return false;
//     }
//     if(root->data == x){
//         return true;
//     }

//     if(root->data > x){
//         searchInBST(root->left, x);
//     }else{
//         searchInBST(root->right, x);
//     }


// }






// bool searchInBST(BinaryTreeNode<int> *root, int x) {
//     // Write your code here.
//     BinaryTreeNode<int> *temp = root;
//     while(temp!=NULL){
//         if(temp->data == x){
//             return true;
//         }
//         if(temp->data > x){
//             temp = temp->left;
//         }else{
//             temp = temp->right;
//         }

//     }
//     return false;
// }