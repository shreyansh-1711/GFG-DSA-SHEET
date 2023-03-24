#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size){
    if(size == 1 || size == 1)
        return true;

    if(arr[0] > arr[1]){
        return false;
    }    
    else{
        bool remaining = isSorted(arr+1, size-1);
        return remaining;
    }
}

int main()
{
    int arr[5] = {2,4,6,8,9};
    int size = 5;
    bool ans = isSorted(arr, size);
    if(ans){
        cout << "Array is Sorted" << endl;
    }else{
        cout << "array is not sorted" << endl;
    }
}