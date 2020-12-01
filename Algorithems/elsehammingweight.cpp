# include <stdio.h>
# include <iostream>

int hammingWeight(uint32_t n){

int count=0;

   while(n!=0){
        count ++;
       n=n&(n-1);
   } 
   return count;

}

using namespace std;

int main(){

   cout<<hammingWeight(31)<<endl;

    return 0;
}