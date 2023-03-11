// class Solution{
//   public:
//     //Function to merge K sorted linked list.
//     Node * mergeKLists(Node *arr[], int k)
//     {
//            // Your code here
//              Node* temp;

        

//         vector<int>v;

//            for(int i=0;i<k;i++)

//            {

//                temp=arr[i];

//                while(temp!=NULL)

//                {

//                    v.push_back(temp->data);

//                    temp=temp->next;

//                }

//            }

           

//            sort(v.begin(),v.end());

           

//           Node* head=new Node(v[0]);

//           temp=head;

          

//           for(int i=1;i<v.size();i++)

//           {

//               Node* n=new Node(v[i]);

//               temp->next=n;

//               temp=temp->next;

//           }

          

//           return head;

           
//     }
// };