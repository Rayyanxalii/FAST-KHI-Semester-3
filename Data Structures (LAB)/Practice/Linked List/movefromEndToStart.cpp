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
node *tail=NULL;

void append(int val){
node *n= new node(val);

   if(head==NULL){
   head=n;
   tail=n;
   }
   else{
   tail->next=n;
   tail=n;
   }
}

void move(){
    int x;
    cout<<"How many elements U want to move: ";
    cin>>x;
    cout<<endl;
    node *p=head;

    for(int i=0; i<x;i++){
        while(p->next!=tail){
       p=p->next;
    }
        tail->next=head;
        head=tail;
        tail=p;
        tail->next=NULL;
        p=head;
    }
}
  void print(){
    node *temp=head;
    while(temp!=NULL){
        cout<<" "<<temp->data;
        temp=temp->next;
    }
   }

};
int main(){

    linkedlist l1;
    l1.append(1);
    l1.append(2);
    l1.append(3);
    l1.append(4);
    l1.append(5);

    l1.print();
    cout<<endl;

    l1.move();
    l1.print();
}