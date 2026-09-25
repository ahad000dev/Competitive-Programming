#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data= data;
        this->left = NULL;
        this->right= NULL;
    }
};
void preorder(Node* root)
{
    if (root == NULL)
    {
        return ;
    }
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root)
{
    if (root == NULL)
    {
        return ;
    }
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}
void postorder(Node* root)
{
    if (root == NULL)
    {
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"->";
}
void levelOrder(Node* root)
{
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();
        cout<<f->data<<"->";
        if (f->left!=NULL)
        {
            q.push(f->left);
        }
        if(f->right!=NULL)
        {
            
            q.push(f->right);
        }
    }
    cout<<endl;
}
int countTree(Node* root)
{
    if (root == NULL)
    {
        return 0;
    }
    int r = countTree(root->right);
    int l = countTree(root->left);
    return r + l + 1;
}
int countLeffTree(Node* root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left==NULL&&root->right==NULL)
    {
        return 1;
    }
    int r = countLeffTree(root->right);
    int l = countLeffTree(root->left);
    return r + l;
}
int countMaxHeight(Node* root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left==NULL&&root->right==NULL)
    {
        return 0;
    }
    int r = countMaxHeight(root->right);
    int l = countMaxHeight(root->left);
    return max(r,l)+1;
}

Node* treeInput()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1){root=NULL;}
    else{root= new Node(val);}
    queue<Node*> q;
    if (root!=NULL){q.push(root);}
    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();
        int r,l;
        cin>>r>>l;
        Node* myleft,*myright;
        if (r==-1)
        {
            myleft= NULL;
        }
        else
        {
            myleft = new Node(r);
        }
        if (l==-1)
        {
            myright = NULL;
        }
        else
        {
            myright = new Node(l);
        }
        p->left= myleft;
        p->right = myright;

        if (p->left!=NULL)
        {
            q.push(p->left);
        }
        if(p->right!=NULL)
        {
            q.push(p->right);
        }
    }
    return root;
}

int main()
{
    Node* root = treeInput();
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    levelOrder(root);
    int count = countTree(root);
    cout<<count<<endl;
    int countLeff = countLeffTree(root);
    cout<<countLeff<<endl;
    int countMaxHei = countMaxHeight(root);
    cout<<countMaxHei<<endl;
    return 0;
}