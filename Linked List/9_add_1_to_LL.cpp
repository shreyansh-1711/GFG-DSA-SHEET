// class Solution
// {
//     private:
//      Node* reverseList(Node* head) {
        
//         Node* curr = head;
//         Node* prev = NULL;
//         Node* next = NULL;
        
//         while(curr != NULL) {
//             next = curr -> next;
//             curr -> next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
    
//     public:
//     Node* addOne(Node *head) 
//     {
//         // Your Code here
//         // return head of list after adding one
        
//         Node *temp=head,*curr=NULL,*prev_curr;
//         curr=reverseList(temp);
        
//         Node* curr_root=curr;
//         while(curr!=NULL)
//         {
//             if(curr->data!=9)
//             {
//                 curr->data=curr->data+1;
//                 break;
//             }
//             else
//                 curr->data=0;
                
//             prev_curr=curr;
//             curr=curr->next;
//         }
//         if(curr==NULL)
//             curr=new Node(1),prev_curr->next=curr;

//         return reverseList(curr_root);
//     }
// };