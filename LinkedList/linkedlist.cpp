#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

};
Node *head;
void insert_end(int value){
    Node *newnode=new Node();
    newnode->data=value;
    if(head==NULL){
        head=newnode;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    temp->next=newnode;
   
  
}
void insert_beg(int value){
    Node* newnode= new Node();
    Node *temp=head;
    newnode->data=value;
    if(head==NULL){
        head=newnode;
        return;
    }
    newnode->next=temp;
    head=newnode;
}
void insert_any_position(int value, int pos){
    Node* newnode= new Node();
    Node *temp=head;
    newnode->data=value;
    if(head==NULL){
        head=newnode;
        return;
    }
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void print(){
    Node *temp=head;
    while(temp!=NULL || temp->next!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    Node obj;
    insert_end(2);
    insert_end(3);
    insert_beg(6);
    insert_end(4);
    insert_end(5);
    insert_any_position(9,3);
    print();
    


    return 0;
}