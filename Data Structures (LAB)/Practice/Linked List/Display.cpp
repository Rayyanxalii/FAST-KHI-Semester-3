#include<iostream>
using namespace std;

class node{
public:
int data;
node *next;
node(int d){
    data=d;
    next=NULL;
}
};

class linkedlist{
    public:
node *head=NULL;

void append(int val){
   if(head==NULL){
   head= new node(val);
   }
   else{
   node *n= new node(val);
   node *temp= head;

   while(temp->next != NULL){
    temp=temp->next;
   }
   temp->next=n;
    n->next=NULL;
   cout<<"Inserted"<<endl;
   }
}

void print(node *ptr){
   while(ptr!= NULL){
    cout<<" "<<ptr->data<<endl;
    ptr=ptr->next;
   }
}
};
int main(){
    linkedlist l1;
    l1.append(1);
    l1.append(3);
    l1.append(5);
    l1.append(7);
    l1.print(l1.head);
}