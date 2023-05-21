#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
    Node*prev;
};
Node* head;
Node* temp;
void beginsert(){
    int value;
    Node* newnode=new Node;
    if(newnode==NULL){
        cout<<"\ncannot insert";
    }
    else{
        cout<<"\nEnter the value :";
        cin>>value;
        if(head==NULL){
            newnode->data=value;
            newnode->next=NULL;
            newnode->prev=NULL;
            head=newnode;
        }
        else{
            newnode->data=value;
            newnode->prev=NULL;
            newnode->next=head;
            head=newnode;
        }
        cout<<"\n value entered";
        cout<<"\n|"<<head->prev<<"|"<<head->data<<"|"<<head->next;
    }
}
void lastinsert(){
    int value;
    Node* newnode=new Node;
    
    if(newnode==NULL){
        cout<<"\noverflow";
    }
    else{
        cout<<"\nEnter the value:";
        cin>>value;
        newnode->data=value;
        if(head==NULL){
            newnode->next=NULL;
            newnode->prev=NULL;
            head=newnode;
        }
        else{
            newnode->data=value;
           temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=temp;
            newnode->next=NULL;
        }
        cout<<"\ninserted value";
    }
}
int main(){
    beginsert();
    beginsert();
    lastinsert();

    return 0;
}