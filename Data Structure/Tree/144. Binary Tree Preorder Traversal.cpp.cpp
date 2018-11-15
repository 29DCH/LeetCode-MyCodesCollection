//递归

class Solution {
public:
    vector<int> res;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root!=NULL)
        {
            res.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
       return res;
    }
};

//迭代

class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> res;
        stack<TreeNode*> tempStack;
        while (!tempStack.empty() || root != NULL) {
            if (root != NULL) {
                res.push_back(root->val);
                tempStack.push(root);
                root = root->left;
            }
            else {
                root = tempStack.top();
                tempStack.pop();
                root = root->right;
            }
        }
        return res;
    }
};