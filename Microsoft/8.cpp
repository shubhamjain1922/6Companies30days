class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       if(root==NULL)
       return;
       queue<Node*> q;
       q.push(root);
       while(!q.empty()){
            int k=q.size();
            while(k--){
                Node* t=q.front();
                q.pop();
                
                if(k==0)
                    t->nextRight=NULL;
                else
                    t->nextRight=q.front();
                
                if(t->left)
                q.push(t->left);
                
                if(t->right)
                    q.push(t->right);
            }
       }
    }    
      
};
