#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};
struct node* top=0;

void push(int x){
    struct node* newnode;
    // newnode=(struct node)new(sizeof(struct node));
    newnode = new node;
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}

void pop(){
    struct node *temp;
    temp=top;
    if(top==NULL)
    cout<<"Underflow";
    else{
        top=temp->link;
        free(temp);
    }
}

void display(){
    struct node *temp;
    temp=top;
    if(top==NULL)
    cout<<"Stack is empty";
    else{
        while(temp!=0){
        cout<<temp->data<<"|";
        temp=temp->link;
        }   
    }
}

void peek(){
    if(top==NULL)
    cout<<"Stack is empty";
    else
    cout<<"\nTop element is "<<top->data;
}

int main(){
    cout<<"Stack elements are : ";
    push(1);
    push(2);
    push(3);
    display();
    peek();
    cout<<"\nAfter Popping : ";
    pop();
    display();
}