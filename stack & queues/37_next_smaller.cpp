// // Simple C++ program to print
// // next smaller elements in a given array
// #include "bits/stdc++.h"
// using namespace std;

// /* prints element and NSE pair
// for all elements of arr[] of size n */
// void printNSE(int arr[], int n)
// {
// 	int next, i, j;
// 	for (i = 0; i < n; i++)
// 	{
// 		next = -1;
// 		for (j = i + 1; j < n; j++)
// 		{
// 			if (arr[i] > arr[j])
// 			{
// 				next = arr[j];
// 				break;
// 			}
// 		}
// 		cout << arr[i] << " -- "
// 			<< next << endl;
// 	}
// }

// // Driver Code
// int main()
// {
// 	int arr[]= {11, 13, 21, 3};
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	printNSE(arr, n);
// 	return 0;
// }



// #include<stack>
// vector<int> nextSmallerElement(vector<int> &arr, int n)
// {
//     // Write your code here.
//     stack<int> s;
//     s.push(-1);
//     vector<int> ans(n);

//     for(int i=n-1; i>=0; i--){
//         int curr = arr[i];
//         while(s.top() >= curr){
//             s.pop();
//         }
//         ans[i] = s.top();
//         s.push(curr);

//     }
//     return ans;
// }
