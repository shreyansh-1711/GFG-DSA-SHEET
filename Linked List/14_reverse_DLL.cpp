// Node* reverseDLL(Node * head)
// {
//     //Your code here
//       Node* prev=NULL;
//     Node* curr=head;
//     Node* forwad=NULL;
//     while(curr)
//     {
//         forwad=curr->next;
//         curr->next=prev;
//         curr->prev=forwad;
//         prev=curr;
//         curr=forwad;
//     }
//     return prev;
// }
