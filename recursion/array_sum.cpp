#include<bits/stdc++.h>
using namespace std;

int sum(int *arr, int size){
   
    //base case
    if(size == 0) {
        return 0;
    }
    if(size == 1 )
    {
        return arr[0];
    }

    int remainingPart = sum(arr+1, size-1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main()
{
    int arr[5] = {2,4,6,8,9};
    int size = 5;
    int ans = sum(arr, size);
    cout << ans << endl;
}