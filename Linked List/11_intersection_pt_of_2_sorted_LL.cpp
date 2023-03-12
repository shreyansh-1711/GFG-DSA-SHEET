
// Node* findIntersection(Node* head1, Node* head2)
// {
//     // Your Code Here
//      map<int , int> mp;
//     Node* temp = head1;
//     while(temp){
//         mp[temp->data]++;
//         temp = temp->next;
//     }
//     temp = head2;
//     while(temp){
//         mp[temp->data]++;
//         temp = temp->next;
//     }
//     Node* dummyhead;
//     Node* head;
//     dummyhead = head = new Node(-1);
//     for(auto it : mp){
//         if(it.second > 1){
//             for(int i = 1; i<=it.second/2; i++){
//                 Node* newnode = new Node(it.first);
//                 dummyhead -> next = newnode;
//                 dummyhead = dummyhead->next;
//             }
//         }
//     }
//     return head->next;
// }