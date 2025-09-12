/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    int a,b,c=0;
    if(root==NULL){return 0;}
    if(root->left==NULL && root->right==NULL){return 1;}
    a=maxDepth(root->left);
    b=maxDepth(root->right);
    if(a>b){c=1+a;} // super need to understand lil confused why  1
    else{c=1+b;}
    return c;
}
