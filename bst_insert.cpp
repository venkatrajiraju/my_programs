#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left,*right;
};
node* insert_BST(node* root,node *n)
{
    if(root==NULL)
    {
        return n;
    }
    if(root->data<=n->data)
    {
        root->right=insert_BST(root->right,n);
    }
    else
    {
        root->left=insert_BST(root->left,n);
    }
    return root;
    
}
void preorder(node *root)
{
    if(root==NULL)
        return;
    
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);

}
void inorder(node *root)
{
    if(root==NULL)
        return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
void postorder(node *root)
{
    if(root==NULL)
        return;
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
        
}

int main()
{
    node *tree=NULL;
    int n,d;
    cout<<"***** BST Insertion and Traversal *****";
    cout<<"\n\nEnter number of nodes : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        node * temp=new node;
        temp->data=d;
        temp->left=temp->right=NULL;

        tree=insert_BST(tree,temp);     
    }
    cout<<"\nPreorder traversal : ";
    preorder(tree);
    cout<<"\nInorder traversal : ";
    inorder(tree);
    cout<<"\nPostorder traversal : ";
    postorder(tree);
    cout<<endl;
}
