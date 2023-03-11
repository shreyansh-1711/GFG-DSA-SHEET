// 3 approach -
// * - Using 2 loops O(n^2)
// * - Using sorting O(nLogn)
// *-  Using Maps



// class Solution
// {
//     public:
//     //Function to remove duplicates from unsorted linked list.
//     Node * removeDuplicates( Node *head) 
//     {
//      // your code goes here
//       unordered_map<int,int>mp;

//      struct Node *temp=head, *prev=NULL;

//      while (temp!=NULL){

//          if(mp[temp->data]==1){

//              prev->next=temp->next;

//              temp=temp->next;

//          }

//          else{

//              mp[temp->data]=1;

//              prev=temp;

//              temp=temp->next;

             

//          }

//      }

//      return head;
//     }
// };
