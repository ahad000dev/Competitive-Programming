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
bool checkLeafNode(Node* root)
{
    if (root == NULL)
    {
        return false;
    }
    else
    { 
        if (root->left==NULL && root->right==NULL)
        {
            return true;
        }
        return checkLeafNode(root->left) && checkLeafNode(root->right);
    }
}

int main()
{
    Node* root = treeInput();
    bool result = checkLeafNode(root);
    if (result)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    // Write your code here

    return 0;
}
