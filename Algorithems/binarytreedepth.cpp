# include <stdio.h>
# include <iostream>
# include <math.h>
# include <vector>
# include <queue>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x),left(NULL),right(NULL) {};


};

void makeBinaryTree(TreeNode *root,vector<int> nums){
     queue<int> qnums;
     for(int i=0;i<nums.size() ;i++){

        qnums.push(nums[i]);

     }

     queue<TreeNode*> qnode;
     qnode.push(root);
     TreeNode *temnode; 
     int i=0;  
     while (qnums.size()>0)
     {
       TreeNode *node=qnode.front();
       if(i==0){
        node->val =qnums.front();qnums.pop();
       }
        
        if(qnums.size()>0 ){
            if(qnums.front()!=NULL){
            temnode=new TreeNode(qnums.front());qnums.pop();
            node->left=temnode;
            qnode.push(temnode);
            }
            else{
                qnums.pop();
            }
        }

       if(qnums.size()>0 ){
             if(qnums.front()!=NULL){
            temnode=new TreeNode(qnums.front());qnums.pop();
            node->right=temnode;
            qnode.push(temnode);
             }
             else
             {
                 qnums.pop();
             }
             qnode.pop();
           i++;  
       }


     }
     



    return;
}

int maxDepth(TreeNode *root ){

     if (root == nullptr) return 0;
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;

     /* if(root==nullptr) return 0;
     if (root->left==nullptr && root->right==nullptr) return 1;

     int leftdepth=maxDepth(root->left)+1;
     int rightdepth=maxDepth(root->right)+1;

     return leftdepth>rightdepth?leftdepth:rightdepth; */


       
      
}
int maxdepth1(TreeNode * root){
   
    if (root == nullptr) return 0;

    queue<TreeNode *> q;
    q.push(root);

    int ans=0;

    while (!q.empty())
    {
        int sz=q.size();  
        while (sz>0)
        {
           TreeNode *node=q.front(); q.pop();
           if(node->left) q.push(node->left);
           if(node->right) q.push(node->right);
           sz-=1;
        }
        ans++;
    }
    return ans;

}

int main(){
  vector<int> nums={3,9,20,NULL,NULL,15,7,3,8,6,33,31,66,99};

  TreeNode *root=new TreeNode(NULL);

  makeBinaryTree(root,nums);

  cout<<maxdepth1(root);

}