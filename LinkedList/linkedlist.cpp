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
    if (head == NULL) {
        cout << "\nStack Underflow" << endl;
        exit(1);
    } else if (head->next == NULL) {
        free(head);
        head = NULL;
    } else {
        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void pop_at_any(int n){
    int count = 0;
    if (head == NULL){
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    Node* temp = head;
    Node* prev = NULL;
    while (temp != NULL && count != n) {
        prev = temp;
        temp = temp->next;
        count++;
    }
    if (temp == NULL) {
        cout << "Position not found." << endl;
        return;
    }
    if (prev == NULL) {
        pop_beg();
    } else {
        prev->next = temp->next;
        free(temp);
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
    pop_beg();
    pop_end();
    pop_at_any(3);
    print();

    return 0;
}
