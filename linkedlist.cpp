#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
class linkedlist{
    Node* head=NULL;
    public:
    int value;
        void beginsert(){
        cout<<"\nenter the value to be inserted:";
        cin>>value;
        Node* newnode=new Node;
        newnode->data=value;
        newnode->next=head;
        head=newnode;
    }
    void lastinsert()
    {
        Node *temp;
        Node* newnode=new Node;
        if(newnode==NULL){
            cout<<"\n overflow";
        }
        else{
            cout<<"\nenter the value to be inserted: ";
            cin>>value;
            newnode->data=value;
            
            if(head==NULL){
            newnode->next=NULL;
            head=newnode;}
            else{
                temp=head;
                while(temp->next!=NULL){
                    temp=temp->next;
                }
                temp->next=newnode;
                newnode->next=NULL;
                }
            }
        }
    void randinsert()
    {
        int loc,value,i;
        Node *temp;
        Node* newnode= new Node;
        if(newnode==NULL)
        {
            cout<<"\n overflow";
        }
        else{
            cout<<"\nenter the data :";
            cin>>value;
            newnode->data=value;
            cout<<"\nenter teh location:";
            cin>>loc;
            temp=head;
            for( i=0;i<loc;i++){
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
            cout<<"\n inserted";
        }
    }
    void bigdelete(){
        Node *newnode;
        newnode=head;
        head=newnode->next;
        free(newnode);
        cout<<"\ndeleted the node from the begn";
    }
    void lastdelete(){
        Node* newnode,*temp;
        if(head->next==NULL){
            head=NULL;
            free(head);
        }
        else{
            newnode=head;
            while(newnode->next!=NULL)
            {
                temp=newnode;
                newnode=newnode->next;
            }
            temp->next=NULL;
            free(newnode);
            cout<<"\nlastdelete ho gaya hai";
        }
    }
    void randdeleted(){
            Node* temp,*newnode;
            int loc,i;
            cout<<"\n enter the position of deleted location:";
            cin>>loc;
            newnode=head;
            for(i=0;i<loc;i++)
            {
                temp=newnode;
                newnode=newnode->next;
            }        
            if(newnode==NULL)  {
                cout<<"\n cannot delete";
                return;

            }
            temp->next=newnode->next;
            free(newnode);
            cout<<"\n deleted randomly";
       }
       void display()  
{  
    Node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        cout<<"Nothing to print";  
    }  
    else  
    {  
        cout<<"\nprinting values . . . . .\n";   
        while (ptr!=NULL)  
        {  
            cout<<"\n"<<ptr->data;  
            ptr = ptr -> next;  
        }  
    }  
}     
       
};

int main()
{
    linkedlist ln;
    ln.beginsert();
    ln.beginsert();
    ln.beginsert();
    ln.beginsert();
    ln.lastinsert();
    ln.randinsert();
    ln.bigdelete();
    ln.lastdelete();
    ln.randdeleted();
    ln.display();
    
    return 0;
}