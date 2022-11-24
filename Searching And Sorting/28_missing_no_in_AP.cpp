
class Solution{
public:
    int inSequence(int A, int B, int C){
        // code here
          if(C==0)

        return A==B;

        

        int n = ((B-A)/C) + 1;

        int x = A + (n-1)*C;

        

        if(n<=0)

        return 0;

        else

        return x==B;
    }
};

//shreyansh jain
