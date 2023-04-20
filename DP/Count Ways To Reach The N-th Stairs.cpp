#include <bits/stdc++.h> 
#define MOD 1000000007
int countDistinctWays(int nStairs) {

    int n=nStairs;  
    if(n==0 || n==1)
        return 1;

    
    int p1=1;
    int p2=1;
    int curr;

    for(int i=2;i<=n;i++){
        curr=(p1+p2) % MOD;
        p1=p2;
        p2=curr;
    }
    return curr;
}