#include <stdio.h>
#include <vector>

using namespace std;

int findonlyNum(int * numbers){
    int tempnum=0;
    for(int i=0;i<sizeof(numbers);i++){
    tempnum=tempnum^numbers[i];
    }
return tempnum;
}
int singlenumber(vector<int>& nums){
  int ret=0;
  int asd=0;
   for(auto e : nums)
//for(int i=0;i<nums.size();i++)
  {
      
      ret ^=e;
      
  }

  return ret;
}

int main(){
    int  nownumbers[]={2,2,9,6,1,1,9};
    vector<int> nownums={2,2,9,6,1,1,9,6,7};

   /*  int tempnum=0;
    for(int i=0;i<sizeof(&nownumbers);i++){
    tempnum=tempnum ^ nownumbers[i];
    } */

printf("testaaa: %d",findonlyNum((int*)&nownumbers));
printf("testbbb: %d",singlenumber(nownums));

return 0;
}


