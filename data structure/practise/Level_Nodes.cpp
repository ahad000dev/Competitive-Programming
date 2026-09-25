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
void printLevelValueX(Node* root,int x)
{
    queue<Node*> q;
    q.push(root);
    int y = 0;
    int flag = 0;
    if (root==NULL)
    {
        cout<<"Invalid"<<endl;
        return ;
    }
    while (!q.empty())
    {
        int s = q.size();
        for (int i = 0; i < s; i++)
        {   
            Node* f = q.front();
            q.pop();
            if (x==y)
            {
                cout<<f->data<<" ";
                flag=1;
            }
            if (f->left!=NULL)
            {
                q.push(f->left);
            }
            if(f->right!=NULL)
            {
                q.push(f->right);
            }
        }
        if (y==x)
        {
            break;
        }
        y++;
    }
    if (flag==0)
    {
        cout<<"Invalid"<<endl;
        return ;
    }
    cout<<endl;
}
int main()
{
    Node* root = treeInput();
    int x;
    cin>>x;
    printLevelValueX(root,x);

    // Write your code here

    return 0;
}
