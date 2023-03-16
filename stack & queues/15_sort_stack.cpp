// void insert_at_correct_position(stack<int> &s,int k){
//     if(s.empty()){
//         s.push(k);
//         return;
//     }
//     if(s.top()<=k) s.push(k);
//     else{
//          int top = s.top();
//          s.pop();
//          insert_at_correct_position(s,k);
//          s.push(top);
//     }
// }

// void solve(stack<int> &s)
// {
//       if(s.empty()) return;
//     int top = s.top();
//     s.pop();
//     solve(s);
//     insert_at_correct_position(s,top);
// }


// void SortedStack :: sort()
// {
//    //Your code here
//       solve(s);
   
// }