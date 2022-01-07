class Solution
{
    public:
    
    void help(Node *root, vector<int> &a){
        if(root==NULL){
            a.push_back(int(NULL));
            return;
        }
        a.push_back(root->data);
        help(root->left,a);
        help(root->right,a);
    }
    vector<int> serialize(Node *root) 
    {
        vector<int> a;
        help(root,a);
        return a;
    }
    
    int ind=0;
    Node * deSerialize(vector<int> &a)
    {
       if(ind>=a.size() || a[ind]==NULL){
           ind++;
           return NULL;
       }
       Node* root=new Node(a[ind++]);
       root->left=deSerialize(a);
       root->right=deSerialize(a);
       return root;
    }

};
