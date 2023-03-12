// int intersectPoint(Node* head1, Node* head2)

// {

//     // Your Code Here

//      if (head1 == NULL || head2 == NULL) {

//         return -1;

//     }

//     unordered_set<Node*> s;

//     while (head1) {

//         s.insert(head1);

//         head1 = head1->next;

//     }

//     while (head2) {

//         if (s.find(head2) != s.end()) {

//             return head2->data;

//         }

//         head2 = head2->next;

//     }

//     return -1;

// }
