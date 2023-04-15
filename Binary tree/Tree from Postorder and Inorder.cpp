// Node*solve(int in[], int post[], int &index,int s,int e,int n,unordered_map<int,int>&mp)
// {
//     if(index<0 || s>e)
//     return NULL;

//     int element=post[index--];
//     Node*root=new Node(element);
    
//     int pos=mp[element];

//     root->right=solve(in,post,index,pos+1,e,n,mp);
//      root->left=solve(in,post,index,s,pos-1,n,mp);
//     return root;
// }
// Node *buildTree(int in[], int post[], int n) {
//     // Your code here
//         unordered_map<int,int>mp;
//     for(int i=0;i<n;i++)
//     {
//         mp[in[i]]=i;
//     }

//     int index=n-1;
//     return solve(in,post,index,0,n-1,n,mp);
// }