#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;   
        node *left;
        node *right;


    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }    

};

node* buildTree(node* root){
    cout << "Enter the data " << endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }

    cout << "Enter the left child " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter the right child " << data << endl;
    root->right = buildTree(root->right);
    return root;                
}

void levelordertraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        
        


    if(temp == NULL){
        cout << endl;
        if(!q.empty()){
            q.push(NULL);
        }
    }
    else{

        cout << temp->data << " ";
        if(temp->left!= NULL){
            q.push(temp->left);
        }
        if(temp->right!= NULL){
            q.push(temp->right);
        }
    }
}
}

vector<int> reverseLevelOrder(node *root)
{
    // code here
     vector<int>ans;
    stack<int>st;
    queue<node*>q;
    q.push(root);
    
    if(root==NULL){
        return ans;
    }
    while(!q.empty()){
        node *s=q.front();
        q.pop();
        st.push(s->data);
        if(s->right) q.push(s->right);
        if(s->left)  q.push(s->left);
        
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}

void inorder(node *root){
    if(root == NULL){
        return ;
    }

    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}


int main(){

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node* root = NULL;
    root = buildTree(root);

    // cout << "Level Order traversing : " ;
    // levelordertraversal(root);

    // vector<int> result = reverseLevelOrder(root);

    // for(int i = 0; i < result.size(); i++){
    //     cout << result[i] << " ";
    // }

    inorder(root);

    return 0;
}