// class solution{   
   
//    private:
//     long long nextSmallerElement(long long arr[], int n){
//         stack<int> s;
//         s.push(-1);
//         vector<int> ans(n);
    
//         for(int i=n-1; i>=0; i--){
//             int curr = arr[i];
//             while(s.top()!= -1 && arr[s.top()] >= curr){
//                 s.pop();
//             }
//             ans[i] = s.top();
//             s.push(i);
    
//         }
//         return ans;
//     }
    
//    long long prevSmallerElement(long long arr[], int n){
//           stack<int> s;
//         s.push(-1);
//         vector<int> ans(n);
    
//         for(int i=0; i<n; i++){
//             int curr = arr[i];
//             while(s.top()!= -1 && arr[s.top()] >= curr){
//                 s.pop();
//             }
//             ans[i] = s.top();
//             s.push(i);
    
//         }
//         return ans;
//     }
    
//  public:
//     //Function to find largest rectangular area possible in a given histogram.
//     long long getMaxArea(long long arr[], int n)
//     {
//         // Your code here
//         vector<int> next(n);
//         next = nextSmallerElement(arr, n);
//         vector<int> prev(n);
//         prev = prevSmallerElement(arr, n);
//         int area = INT_MIN;
//         for(int i=0; i<n; i++){
//             int l = arr[i];
            
            
//             if(next[i]==-1){
//                 next[i] = n;
//             }
//             int b = next[i] - prev[i] - 1;
            
//             int newArea = l*b;
            
//             area = max(area, newArea);
            
//         }
//         return ans;
        
//     }
// };