#include<bits/stdc++.h>
using namespace std;

bool binraySearch(int *arr, int s, int e, int k){

    //base case
    if(s>e){
        return -1;
    }

    int mid = s+(e-s)/2;

    if(arr[mid] == k){
        return true;
    }

    if(arr[mid] < k ){
        return binraySearch(arr , mid+1, e,k);
    }
    else{
        return binraySearch(arr ,s,mid-1,k)
;    }


}

int main()
{
    int arr[6] = {2,4,6,10,14,16};
    int size = 6;
    int key = 18;
   
    cout << binraySearch(arr,0,5,key);

    return 0;
}