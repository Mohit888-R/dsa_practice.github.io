
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

// void print(Node *n){
//     while(n!=NULL){
//         cout<<n->data<<" ";
//         n = n->next;
//     }
// }

//###########################################################
// #########################   insertion   ###################
// #########################################################

//add at the front 
void push(Node** head_ref,int new_data)
{   
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;  
}

/*
//add at the after
void insertatafter(Node* prev_node,int new_data)
{
    if(prev_node==NULL){
        cout<<"the previous node is not null";
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}


//add at the end
void append(Node** head_ref,int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    Node* temp = *head_ref;
    new_node->next  =  NULL;

    if(*head_ref==NULL)
    {
        *head_ref=new_node;
        return;
    }

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;
    return;
}

*/

//###########################################################
// #########################   deletion   ###################
// #########################################################

/*
void deletion(Node** head_ref,int key)
{
    Node* temp = *head_ref;
    Node* prev_node = *head_ref;

    if(temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        delete temp;
        return;
    }
    else
    {
        while(temp!=NULL && temp->data != key)
        {
            prev_node = temp;
            temp = temp->next;
        }

        if(temp==NULL)
            return;

        prev_node->next = temp->next;
        delete temp;
    }


}

*/

// *** by recursive form
void deletion(Node** head_ref,int position)
{
    Node* temp = *head_ref;

    if(temp == NULL)
        return;
    
    if(position==0)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    
    for(int i=0;temp != NULL && i<position-1;i++)
        temp = temp->next;
    
    //positon is more than list nodes
    if(temp==NULL || temp->next ==NULL)
        return;

    Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;

    

}

void fulllistdel(Node** head_ref)
{
    Node* current = *head_ref;
    Node* next= NULL;
    while(current!=NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    *head_ref = NULL;

}

void display(Node* n)
{
    while(n!=NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}



int main()
{

    /*  
        traversal
    */
    // Node* head = NULL;
    // Node* second = NULL;
    // Node* third = NULL;
    
    // head = new Node();
    // second = new Node();
    // third = new Node();

    // head->data = 1;
    // head->next = second;

   

    // second->data = 2;
    // second->next = third;

    // third->data = 3;
    // third->next = NULL;

    // print(head);

    Node* head = NULL;
    /*
    // insertion 

    

    push(&head,4);
   
    append(&head,23);
    insertatafter(head->next,7);
    insertatafter(head->next,70);
    
    append(&head,61);
  
    append(&head,16);
    push(&head,9);

    display(head);
    */

    // deletion 
    // ****** by iterative method
   /* push(&head,4);
    push(&head,5);
    push(&head,2);
    push(&head,1);
    cout<<"before deletion..\n";
    display(head);
    deletion(&head,2);
    cout<<"\nafter deletion..\n";
    display(head);
    */
//     push(&head,4);
//     push(&head,5);
//    push(&head,6);
//     push(&head,8);
//     push(&head,2);
//     push(&head,1);
//     cout<<"creating a linked list . . \n";
//     display(head);
//     cout<<"\nlinked list after deletion at postion 4\n";
//     deletion(&head,4);
//     display(head);
    
    push(&head,4);
    push(&head,5);
   push(&head,6);
    push(&head,8);
    push(&head,2);
    push(&head,1);
    cout<<"before deletion \n";
    display(head);
    fulllistdel(&head);
    cout<<"\nlinked list after full list deletion is empty \n";
    display(head);

    return 0;
}