# include <stdio.h>
# include <vector>

using namespace std;

void arrayrotate(vector<int>& nums, int k );
void arrayrotate1(vector<int>& nums, int k);

int main(){
   vector<int> nownumber={1,2,3,4,5,6,7};
   int k=3;

//    arrayrotate(nownumber,k);
   arrayrotate1(nownumber,k);

   for(int j=0;j< nownumber.size();j++){
               
                printf("%d",nownumber[j]);
               
            } 
scanf("input:"); //asd

             return 0;
            // system(pause);

}

void arrayrotate(vector<int>& nums, int k ){

 int tempnum;
        for(int i=0; i<k;i++){
            tempnum=nums[nums.size()-1];
            for(int j=0;j< nums.size()-1;j++){
               
                nums[nums.size()-1-j]=nums[nums.size()-1-j-1];
               
            } 
             nums[0]=tempnum;
        }

}

 void arrayrotate1(vector<int>& nums, int k) {
       int len  = nums.size();
       k = k % len;
       int count = 0;         // 记录交换位置的次数，n个同学一共需要换n次
        for(int start = 0; count < len; start++) {
            int cur = start;       // 从0位置开始换位子
            int pre = nums[cur];   
            do{
                int next = (cur + k) % len;
                int temp = nums[next];    // 来到角落...
                nums[next] = pre;
                pre = temp;
                cur = next;
                count++;
            }while(start != cur)  ;     // 循环暂停，回到起始位置，角落无人
             
        }   
    }  

