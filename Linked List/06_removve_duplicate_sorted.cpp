// // Node *removeDuplicates(Node *head)
// {
//  // your code goes here
//     if(head == NULL)
//         return NULL;
    
//     //Non empty
//     Node* curr = head;
    
//     while(curr != NULL){
//         if((curr->next != NULL) && curr->data == curr->next->data ){
//             Node* next_next = curr->next->next;
//             Node* NodeToDelete = curr->next;
//             delete(NodeToDelete);
//             curr->next = next_next;
//         }
//         else{
//             curr=curr->next;
//         }
//     }
//     return head;
        
// }