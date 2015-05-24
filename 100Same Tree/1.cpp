/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}  
 * };
 *  eg. TreeNode * a =new TreeNode(5) a为一个节点，其val=5，left=NULL，left=NULL
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if((p==NULL)&&(q==NULL))
            return true;
        if((p==NULL)||(q==NULL))
            return false;
        if(p->val==q->val){
            return (isSameTree(p->left,q->left)&&isSameTree(p->right,q->right));
        }else{
            return false;
        }
    }
};