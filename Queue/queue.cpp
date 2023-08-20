#include <iostream>
#include <vector>

using namespace std;
int front = -1;
int rear = -1; // Changed variable name from "end" to "rear"
int queue[10];

void enqueue(int value) {
    if (rear >= 10) {
        cout << "overflow\n";
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = value;
    } else {
        queue[++rear] = value;
    }
}
void Dequeue(){
    if(rear<=-1){
        cout<<"underflow\n";
    }
    else
    {
        for(int i=0;i<=10;i++){
            queue[i]=queue[i+1];
        }
        rear--;
    }

}

void display() {
    int i = rear;

    while (i != -1) {
        cout << "|" << queue[i] << "|";
        i--;
    }
}

int main() {
    Dequeue();
    enqueue(4);
    enqueue(7);
    enqueue(8);
    enqueue(5);
    Dequeue();
    enqueue(87);
    Dequeue();
    enqueue(76);
    enqueue(4);
    display();

    return 0;
}
