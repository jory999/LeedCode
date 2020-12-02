# include <stdio.h>
# include <iostream>
# include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums){
     if (nums.size()==0) return 0;
        if (nums.size()==1) return 1;
        if (nums.size()==2 && nums[0]!=nums[1]){
            return 2;
        }
       
vector<int>::iterator it,ittemp;
     int count;
     
     ittemp=nums.begin();
     ittemp++;
     for(it=nums.begin();it!=nums.end();){
          
          while(*it==*ittemp && ittemp!=nums.end()){

              ittemp=nums.erase(ittemp);
          }
          ittemp++;
          it++;
     }


    return nums.size();
}

int main(){

   vector<int> nownums={1,2,2,3,5,5,6};

   for(int i=0;i<nownums.size();i++)
         cout<<nownums[i]<<ends;
    cout<<endl;

   cout<<removeDuplicates(nownums)<<endl;
   for(int i=0;i<nownums.size();i++)
         cout<<nownums[i]<<ends;
    cout<<endl;
    return 0;
}