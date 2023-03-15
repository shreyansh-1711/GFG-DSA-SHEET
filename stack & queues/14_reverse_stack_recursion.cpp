// void insertAtBottom(stack<int> &s, int ele){
//     if(s.empty()){
//         s.push(ele);
//         return;
//     }

//     int a = s.top();
//     s.pop();
//     insertAtBottom(s, ele);
//     s.push(a);
  
// }

// void reverseStack(stack<int> &stack) {
//     // Write your code here
//     if(stack.empty()){
//         return;
//     }

//     int num = stack.top();
//     stack.pop();

//     reverseStack(stack);
//     insertAtBottom(stack, num);

    
// }