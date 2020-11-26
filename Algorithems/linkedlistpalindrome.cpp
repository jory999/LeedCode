# include <stdio.h>
# include <iostream>
# include <vector>
# include <math.h>

using namespace std;

struct ListNode{
int val;
ListNode *next;
ListNode(int x):val(x),next(NULL) {};

};

bool ispalindrome(ListNode* head){
    vector<int> vals;
        while (head != nullptr) {
            vals.emplace_back(head->val);
            head = head->next;
        }
        for (int i = 0, j = (int)vals.size() - 1; i < j; ++i, --j) {
            if (vals[i] != vals[j]) {
                return false;
            }
        }
        return true;

    /* ListNode *tempnode= new ListNode(0);

    int i=0;

    tempnode=head;
    do
    {
       i++;
       tempnode=tempnode->next;

    }
    while (tempnode->next)

    for(int j=0;j<floor(i/2);j++){
       
       if(head->val!=tempnode->val){
           return false;
       }
        head++;
        tempnode--;
    }
    
    
    return true; */
};

int main(){
    
vector<int> nums={1,2,5,2,1};
ListNode *nowhead,*tempnode;
tempnode=new ListNode(0);
nowhead=tempnode;

for(int i=0;i < nums.size(); i++){

   tempnode->val=nums[i];
   /* tempnode->next=new ListNode(0);
   tempnode=tempnode->next; */
   if(i<nums.size()-1){ 
   tempnode->next=new ListNode(0);
   tempnode=tempnode->next;
   }
}
/* ListNode *t;
t= --tempnode ;
t->next=nullptr; */

//更改提交 再次更改


for(ListNode *p=nowhead;p;p=p->next){
cout<<p->val<<", ";

}
bool bbb=ispalindrome(nowhead);
if(bbb)
{
printf("yes");
}
else
{
   printf("no");
}


}