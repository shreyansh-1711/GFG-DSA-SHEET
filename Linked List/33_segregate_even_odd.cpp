// class Solution{
// public:
//     Node* divide(int N, Node *head){
//         // code here
//         vector<int> v1,v2;
//         Node* temp = head;
//         while(temp!=NULL){
//             if(temp->data %2 ==0)
//                 v1.push_back(temp->data);
//             else
//                 v2.push_back(temp->data);
            
//             temp = temp->next;    
//         }
        
//           temp=head;

        

//         for(int i=0;i<v1.size();i++)

//         {

//           temp->data=v1[i];

//           temp=temp->next;

//         }

        

//         for(int i=0;i<v2.size();i++)

//         {

//           temp->data=v2[i];

//           temp=temp->next;

//         }

        

//         return head;
//     }
// };