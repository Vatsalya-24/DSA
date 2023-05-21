#include<iostream>
using namespace std;

int queue[100],n=100,front=-1,rear=-1;

void enqueue(int value){
    if(n-1<rear)
    {
        cout<<"\n overflow hai!";
    }
    else{
        front=0;
        rear++;
        queue[rear]=value;

    }
}
void dequeue()
{
    if(rear<=-1){
        cout<<"\nunderflow hai!";
    }
    else{
        front++;

    }
}
void display(){
    for(int i=front;i<=rear;i++)
    {
    cout<<"\n "<<queue[i];
    }
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    display();
    return 0;
}