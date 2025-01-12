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

int sum(node * ptr){
int total=0;
while (ptr){
total=total + ptr->data;
ptr= ptr->next;
}
return total;
}

};
int main(){
    linkedlist l;
    l.append(8);
    l.append(3);
    l.append(7);
    l.append(12);
    l.append(9);
   int i= l.sum(l.head);
   cout<<"Total: "<<i<<endl;
}