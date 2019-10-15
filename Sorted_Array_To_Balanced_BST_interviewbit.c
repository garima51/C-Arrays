 treenode *newnode(int value)
 {
     treenode * node=(treenode *)malloc(sizeof(treenode));
     node->val=value;
     node->left=NULL;
     node->right=NULL;
 }
 treenode * BST(int *A,int start,int end)
 {
     if(start>end)
     return NULL;
     int mid=(start+end)/2;
     treenode *root=newnode(A[mid]);
     root->left=BST(A,start,mid-1);
     root->right=BST(A,mid+1,end);
     return root;
 }
 
treenode* sortedArrayToBST(const int* A, int n1) {
    return BST(A,0,n1-1);
}

