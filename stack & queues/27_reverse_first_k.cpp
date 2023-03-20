// // Function to reverse first k elements of a queue.
// queue<int> modifyQueue(queue<int> q, int k) {
//     // add code here.
//       stack<int>s;
//             //step1: pop first k elements from q and put in stack
            
//             for(int i=0;i<k;i++)
//             {
//                 s.push(q.front());
//                 q.pop();
//             }
            
            
//             //step2: fetch from stack and push into q
            
//             while(!s.empty())
//             {
//                 q.push(s.top());
//                 s.pop();
                
//             }
//             //step3: first (n-k) element from elemnt and push back
            
//             int t = q.size()-k;
            
//             while(t--)
//             {
//                 int val = q.front();
//                 q.pop();
//                 q.push(val);
//             }
            
//             return q;
// }