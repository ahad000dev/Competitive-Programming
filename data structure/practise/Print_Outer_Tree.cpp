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
void leftorder(Node* root)
{
    if (root == NULL)
    {
        return ;
    }
    if (root->left)
    {
        leftorder(root->left);
    }
    else if (root->right)
    {
        leftorder(root->right);
    }
    cout<<root->data<<" ";
}
void rightOrder(Node* root)
{
    if (root == NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    if (root->right)
    {
        rightOrder(root->right);
    }
    else if (root->left)
    {
        rightOrder(root->left);
    }
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
    if (root == NULL) {
        return 0;
    }
    if (root->left != NULL && root->right == NULL)
    {
        leftorder(root);
    }
    else if (root->left == NULL && root->right != NULL)
    {
        rightOrder(root);
    }
    else
    {
        leftorder(root);
        rightOrder(root->right);
    }
    cout<<endl;
    return 0;
}