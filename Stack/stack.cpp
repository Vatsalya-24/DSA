#include<iostream>
#include<vector>

using namespace std;
int top =-1;
int stack[10];
void push(int value){
    if(top>=10){
        cout<<"overflow";
    }
    else{
        stack[++top]=value;
    }
}
void pop(){
    if(top==-1){
        cout<<"undrflow";
    }
    else{
        top--;
    }
}

void print(){
    int i=top;
    while(i!=-1){
        cout<<"|"<<stack[i]<<"|\n";
        i--;
    }
}
int main(){

push(2);
push(3);
push(4);
push(5);
push(6);
pop();
pop();
print();



return 0;
}