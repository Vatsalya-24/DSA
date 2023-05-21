#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node *head,*tail;
void Enqueue(){
    int value;
    Node* newnode=new Node;
    if(newnode==NULL){
        cout<<"\noverflow";
    }
    else{
        cout<<"\nenter the value:";
        cin>>value;
        newnode->data=value;
        if(head==NULL){
            head=newnode;
            tail=newnode;
            head->next=NULL;
            tail->next=NULL;    
        }
        else{
            tail->next=newnode;
            tail=newnode;
            tail->next=NULL;
        }
    }
    cout<<"\nenqueued element";
}
void Dequeue(){
    Node* newnode;
    if(tail==NULL){
        cout<<"\nunderflow";
    }
    else{
        newnode=head;
        head=head->next;
        
        free(newnode);
        
    }
    cout<<"\ndeleted successfully";
}
void Display(){
    Node* newnode;
    if(head==NULL)
    {
        cout<<"\nunderflow";
    }
    else{
        newnode=head;
        while(newnode!=NULL){
            cout<<"\n"<<newnode->data;
            newnode=newnode->next;
        }
    }
}
int main(){
    Enqueue();
    Enqueue();
    Dequeue();
    Display();

}