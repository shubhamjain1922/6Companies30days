class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int help(Node* node){
        if(node==NULL)
            return 0;
        int l=help(node->left);
        int r=help(node->right);
        int a=node->data+r+l;
        node->data=l+r;
        return a;
    }
    void toSumTree(Node *node)
    {
        help(node);
    }
};
