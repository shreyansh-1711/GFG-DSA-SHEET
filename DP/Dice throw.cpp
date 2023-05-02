long long solve(int faces, int dice, int tar){
      if(tar<0){
          return 0;
      }
      if(dice==0 && tar!=0){
          return 0;
      }
      if(tar==0 && dice!=0){
          return 0;
      }
      if(dice==0 && tar==0){
          return 1;
      }
      long long ans = 0;
      for(int i=1; i<=faces ;i++){
          ans = ans + solve(faces, dice-1, tar-i);
      }
      return ans;
      
  }long long solve(int faces, int dice, int tar){
      if(tar<0){
          return 0;
      }
      if(dice==0 && tar!=0){
          return 0;
      }
      if(tar==0 && dice!=0){
          return 0;
      }
      if(dice==0 && tar==0){
          return 1;
      }
      long long ans = 0;
      for(int i=1; i<=faces ;i++){
          ans = ans + solve(faces, dice-1, tar-i);
      }
      return ans;
      
  }
};
