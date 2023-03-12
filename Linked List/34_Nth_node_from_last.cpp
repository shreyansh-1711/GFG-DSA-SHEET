// int length(Node* head){
//     int count = 0;
//     Node*temp = head;
//     while(temp != NULL){
//         count++;
//         temp=temp->next;
//     }
//     return count;
// }

// int getNthFromLast(Node *head, int n)
// {
//        // Your code here
//           int len = length(head);

//      int z= len - n ;

//      Node* temp =  head ; 

//      if(len <n){

//          return -1;

//      }

//      while(temp -> next != NULL && z!=0 ){

//          temp = temp -> next ;

//          z--;

//          }

//        return temp -> data ;
// }