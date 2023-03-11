// class Solution
// {
//     public:
//     struct node *reverse (struct node *head, int k)
//     { 
//         // Complete this method
//         //base case
//         if(head == NULL){
//             return NULL;
//         }
        
//         // step-1 : reverse K nodes
//         node* next = NULL;
//         node* curr = head;
//         node* prev = NULL;
//         int count = 0;
//         while(curr != NULL && count<k){
//             next = curr->next;
//             curr->next = prev;
//             prev= curr;
//             curr = next;
//             count++;
//         }
        
//         // step - 2 recursion
//         head->next = reverse(next, k);
        
//         return prev;
//     }
// };