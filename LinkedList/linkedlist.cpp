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
    Node *newnode=new Node();\
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
void print(){
    Node *temp=head;
    while(temp->next=NULL){
        cout<<temp->data;
    }
}
int main(){
    Node obj;
    insert_end(2);
    insert_end(3);
    insert_end(4);
    insert_end(5);
    print();
    
    


    return 0;
}