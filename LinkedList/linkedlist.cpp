#include<iostream>
#include<vector>
#include <cstdlib> // For exit() function
using namespace std;

class Node{
    public:
        int data;
        Node* next;

};

Node *head;

void insert_end(int value){
    Node *newnode = new Node();
    newnode->data = value;
    newnode->next = NULL; // Initialize the next pointer
    if(head == NULL){
        head = newnode;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}

void insert_beg(int value){
    Node* newnode = new Node();
    newnode->data = value;
    newnode->next = head; // Set the new node's next to the current head
    head = newnode;
}

void insert_any_position(int value, int pos){
    Node* newnode = new Node();
    newnode->data = value;
    newnode->next = NULL; // Initialize the next pointer
    if(head == NULL){
        head = newnode;
        return;
    }
    Node *temp = head;
    for(int i = 1; i < pos - 1; i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void pop_beg() {
    if (head == NULL) {
        cout << "\nStack Underflow" << endl;
        exit(1);
    } else {
        Node* temp = head;
        head = head->next;
        free(temp); 
    }
}
void pop_end(){
    if(head ==NULL){
        cout<< "\n stack Underflow " << endl;
        exit(1);
    }
     else if (head->next == NULL) {
        
        free(head);
        head = NULL;
    } else {
        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next); // Free the last node
        temp->next = NULL;
    }
}

void print(){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    insert_end(2);
    insert_end(3);
    insert_beg(6);
    insert_end(4);
    insert_end(5);
    insert_any_position(9, 3);
    pop_beg(); // Corrected function call
    pop_end();
    print();

    return 0;
}
