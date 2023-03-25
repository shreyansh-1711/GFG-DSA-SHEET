#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int k){

    // base case
    if(size == 0) return false;

    if(arr[0] == k) return true;
    else{
        bool remaining = search(arr+1, size-1, k);
        return remaining;
    }

}

int main()
{
    int arr[5] = {2,4,6,8,9};
    int size = 5;
    int key = 4;
    bool ans = search(arr, size, key);

    if(ans){
        cout << "Found " << endl;
    }
    return 0;
}