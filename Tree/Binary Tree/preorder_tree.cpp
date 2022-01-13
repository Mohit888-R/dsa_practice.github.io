
#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int val)
    {
        data = val;
        right = left = NULL;
    }
};


void preorder(struct Node* node)
{
    if(node==NULL)
        return;
    
    cout<<node->data;
    preorder(node->left);
    preorder(node->right);
        
}


int main()
{
    //root node
    struct Node* node = new Node(1);
    
    //left node
    node->left = new Node(2);
   

    node->left->left = new Node(4);

    node->left->right = new Node(5);

    node->left->right->left = new Node(8);

    //right side node
    node->right = new Node(3);
    node->right->left = new Node(6);
    node->right->right = new Node(7);
    node->right->right->left = new Node(9);
    node->right->right->right = new Node(10);
    cout<<"preorder : ";
    preorder(node);

   
    return 0;
}