/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int getPreOrder(TreeNode* initial, int value = 0){
    int temp = value;
    cout<<initial->val<<" ";
    temp = temp*10 + initial -> val;
    temp ;
    if(initial->left==nullptr&&initial->right==nullptr) return temp;
    int leftVal = 0, rightVal = 0;
    if(initial->left!=nullptr) leftVal = getPreOrder(initial->left, temp);
    if(initial->right!=nullptr) rightVal = getPreOrder(initial->right, temp);
    cout<<'\n';
    return leftVal + rightVal;
}
    int sumNumbers(TreeNode* root) {
    return getPreOrder(root, 0);      
    }
};