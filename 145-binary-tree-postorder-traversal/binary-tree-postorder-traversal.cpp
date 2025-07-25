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
    vector<int> postorderTraversal(TreeNode* root) {
    vector<int> post;
    if (root == NULL) return post;

    stack<TreeNode*> st;
    TreeNode* cur = root;
    TreeNode* temp = nullptr;

    while (cur != NULL || !st.empty()) {
        if (cur != NULL) {
            st.push(cur);
            cur = cur->left;
        } else {
            temp = st.top()->right;
            if (temp == NULL) {
                temp = st.top();
                st.pop();
                post.push_back(temp->val);
                while (!st.empty() && temp == st.top()->right) {
                    temp = st.top();
                    st.pop();
                    post.push_back(temp->val);
                }
            } else {
                cur = temp;
            }
        }
 
    }

    return post;
}    

};