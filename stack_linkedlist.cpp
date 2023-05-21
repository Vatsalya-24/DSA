#include<iostream>
using namespace std;
 
struct Node
{
    int data;
    Node* next;
};
Node* head;
void push(){
    int value;
    Node*newnode=new Node;
    if(newnode==NULL)
    {
        cout<<"\ncannot be  pushed";

    }
    else{
        if(head==NULL)
        {
            cout<<"\nenter the value :";
            cin>>value;
            newnode->data=value;
            newnode->next=NULL;
            head=newnode;
        }
        else{
             cout<<"\nenter the value :";
            cin>>value;
            newnode->data=value;
            newnode->next=head;
            head=newnode;
            
        }
        cout<<"\nvalue pushed";
    }
}
void pop(){
    int value;
    Node* newnode;
    if(head==NULL){
        cout<<"\nunderflow";
    }
    else{
        newnode=head;
        head=head->next;
        free(newnode);
        cout<<"\nvalued poped";
    }
}
void display(){
        Node* newnode;
        newnode=head;
        if(newnode==NULL){
            cout<<"\n the stack is empty";
        }
        else{
            while(newnode!=NULL)
            {
                cout<<"\n"<<newnode->data;
                newnode=newnode->next;
            }
        }
}
int main(){
    push();
    push();
    push();
    push();
    pop();
    display();

    return 0;
}
