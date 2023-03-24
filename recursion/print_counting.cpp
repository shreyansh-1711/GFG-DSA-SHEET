#include<bits/stdc++.h>
using namespace std;


int counting(int n){
    if(n==0) return ;

    cout << n<<" "<<endl;
    return counting(n-1);

}


int main()
{
    int n;
    cin >> n;
    counting(n);

    return 0;
}