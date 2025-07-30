// Structure of node
/*class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    int countNode(struct Node* root){
        if(root == NULL)
            return 0;
        return 1 + countNode(root->left) + countNode(root->right);
    }
    
    bool isCBT(struct Node* root, int index, int cnt){
        if(root == NULL)
            return true;
        if(index >= cnt)
            return false;
        return isCBT(root->left, 2 * index + 1, cnt) && 
               isCBT(root->right, 2 * index + 2, cnt);
    }
    
    bool isMaxOrder(struct Node* root){
        // Leaf node
        if(root->left == NULL && root->right == NULL)
            return true;

        // Only left child
        if(root->right == NULL)
            return (root->data >= root->left->data) && isMaxOrder(root->left);

        // Both children exist
        else {
            bool left = isMaxOrder(root->left);
            bool right = isMaxOrder(root->right);
            return (left && right &&
                    root->data >= root->left->data &&
                    root->data >= root->right->data);
        }
    }

    bool isHeap(Node* tree) {
        int totalcount = countNode(tree);
        return isCBT(tree, 0, totalcount) && isMaxOrder(tree);
    }
};
