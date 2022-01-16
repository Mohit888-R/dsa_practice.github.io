#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;  
    Node(int val)
    {
        data = val;
       left =  right = NULL;
       
    } 
};

/*struct Node* NewNode(int data){
    struct Node* node = new struct Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}*/

void iterativepreorder(Node* root)
{
    if(root==NULL)
        return;
    
    stack<Node*>st;
    st.push(root);

    while(!st.empty())
    {
        struct Node* node = st.top();
        cout<<node->data<<" ";
        st.pop();

        if(node->right!=NULL)
            st.push(node->right);
        if(node->left!=NULL)
            st.push(node->left);
    }
} 


int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->left->right->left = new Node(5);
    root->left->right->right = new Node(6);
    iterativepreorder(root);    
    return 0;
}