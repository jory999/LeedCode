# include <stdio.h>
# include <iostream>
# include <vector>
# include <queue>
# include <math.h>
# include <algorithm>
# include <climits>

#ifdef __linux__
#define NOWSYSTEM "linux sys"
#endif   
#ifdef _WIN32     
#define  NOWSYSTEM   "windows sys"
#endif

using namespace std;

class MinStack {
 
     vector<int> *stacklist;
    vector<int> *stacklistmin;
    

    public:
       MinStack(){

            stacklist=new vector<int>;
            stacklistmin=new vector<int>;
            stacklistmin->push_back(INT_MAX);
           
       }
       void push(int x){
         
              stacklist->push_back(x);
              stacklistmin->push_back(min(stacklistmin->back(),x));
       }
       void pop(){
               stacklist->pop_back();
               stacklistmin->pop_back();
       }
       int top(){
          
               return stacklist->back();
          
           
             
       }
       int getMin(){
           
           return stacklistmin->back();
         

       }
};

int main(){

cout<<NOWSYSTEM<<endl;

#ifdef __linux__
 cout<<"OS is linux"<<endl;
#endif   
# ifdef _WIN32     
     cout<<"OS id windows"<<endl;
# endif
    
    /*  int judge;

     judge=system("cls");

     if(judge==0){
          cout<<"Windows"<<endl;
     }else{
          cout<<"Linux"<<endl;
     } */

     MinStack *mstack=new MinStack();
     // MinStack mstack;

     mstack->push(-5);
     mstack->push(-3);
     mstack->push(-9);
     mstack->push(11);
     mstack->push(7);

     cout<<mstack->getMin()<<endl;
      
      delete mstack;
     return 0;

   //test pull request


}