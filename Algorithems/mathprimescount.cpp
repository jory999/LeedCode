# include <stdio.h>
# include <iostream>
# include <map>
# include <vector>

using namespace std;

int countprimes(int n){

    vector<bool> signs(n, true);
 int nowcounts=0;


 for(int j=2;j<n;j++){
      if(signs[j]) {
         nowcounts++;
         for(int k=j+j;k<=n;k+=j){
         if(k%j==0){
             signs[k]=0;

         }
         
          }
          

     
     }

 }

return nowcounts;
 /* map<int,int> mappairs;
 int nowcounts=0;

 for(int i=1;i<=n;i++){

     mappairs.insert(pair<int,int>(i,1));
 }

 for(int j=2;j<n;j++){
      if(mappairs[j]!=1) {
          continue;
          }else
          {
            nowcounts++;
          }
          

     for(int k=j+1;k<n;k++){
         if(k%j==0){
             mappairs[k]=0;

         }
     }

 }

return nowcounts; */
}

int main(){

//int nowcounts=countprimes(100);

cout<<countprimes(11)<<endl;

return 0;
//aaa

}