#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* right;
    Node* left;
    Node(int val){
        data = val;
        right=left = NULL;
    }
};

void inorder(struct Node* root)
{
    if(root==NULL)
        return;
    
    stack<Node*>st;
    Node* curr = root;

    while(curr!=NULL || !st.empty())
    {
        while(curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }

        curr =  st.top();
        st.pop();
        cout<<curr->data<<" ";

        curr = curr->right;


    }
    
}

int main()
{
    struct Node *root = new Node(1);
    root->left        = new Node(2);
    root->right       = new Node(3);
    root->left->left  = new Node(4);
    root->left->right = new Node(5);
 
    inorder(root);
    return 0;
}