// class Solution
// {
//     public:
//     Node *compute(Node *head)
//     {
//         // your code goes here
//          auto curr = head;
        
//         while(curr->next)
//         {
//             if(curr->next->data>curr->data) // this condition will be true atleast once
//             {
//                 curr->data=curr->next->data;
//                 auto x = curr->next;
//                 curr->next = curr->next->next;
//                 delete(x);
//                 curr = head; // reset curr pointer to head
//             }
//             else curr=curr->next;
//         }
//         return head;
//     }
    
// };
   
