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
int sumReturn(Node* root)
{
    int sum = 0;
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            return 0;
        }
        else
        {
          sum += sumReturn(root->left);
          sum += root->data;
          sum += sumReturn(root->right);
            
        }
    }
    return sum;
}
int main()
{
     Node* root = treeInput();
    int result = sumReturn(root);
    cout<<result<<endl;
    // Write your code here

    return 0;
}
