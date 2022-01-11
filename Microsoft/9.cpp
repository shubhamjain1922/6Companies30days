int help(Node* root,int X,int &res){
    if(root==NULL)
	    return 0;
	int sum=root->data+help(root->left,X,res)+help(root->right,X,res);
	if(sum==X)
	    res++;
	return sum;
}
int countSubtreesWithSumX(Node* root, int X)
{
	if(root==NULL)
	    return 0;
	int res=0;
	help(root,X,res);
	return res;
}
