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
   //cout<<"Inserted"<<endl;
   }
}
 
 void reverse(){
    node *p=head;
    node *q=NULL;
    node *r= NULL;

    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
 }

 void print(){
    node *p=head;
    while(p!=NULL){
        cout<<" "<<p->data;
        p=p->next;
    }
 }

};

int main(){
    linkedlist l;
    l.append(1);
    l.append(2);
    l.append(3);
    l.append(4);
    l.append(5);
    l.print();
    cout<<endl;

    l.reverse();
    l.print();

}