#include<iostream>
using namespace std;
int stack[100],n=100,top=-1;

void push(int val)
{
    if(top>=n-1)
    {
        cout<<"stack is overfull";
    }
    else{
        
        top++;
        stack[top]=val;
       
        
    }
}
void pop()
{
    if(top==-1){
        cout<<"\nstack is underflow";
    }
    else{
        top--;
    }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
int main()
{
    push(2);
    push(3);
    push(4);
    
    display();


    return 0;
}