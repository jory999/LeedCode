# include <stdio.h>
# include <iostream>
# include <vector>

using namespace std;

int maxsubarray(vector<int> &nums){

int result=nums[0];
int tmp=0;

 for (const auto &x: nums) {
            tmp = max(tmp + x, x);
            result = max(result, tmp);
        }


/* for (int i=1;i<=nums.size();i++){
    for(int j=0;j<=nums.size()-i;j++){
         for(int k=0;k<i;k++){
                
               tmp=tmp+nums[j+k];
              
         }
          if(tmp>result){  result=tmp;  }
         tmp=0;
    } 
    
}*/

return result;

}

int main(){

    //   vector<int> nownums={-2,1,-3,4,-1,2,1,-5,4};
     //vector<int> nownumber={1,2,3,4,5,6,7};
vector<int> nownums={-2,1};
      cout<< maxsubarray( nownums) << endl;

    return 0;
}