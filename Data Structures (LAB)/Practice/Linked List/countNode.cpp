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

int count(node *ptr){
  int count=0;
  while(ptr!=NULL){
    count ++;
    ptr=ptr->next;
  }
  return count;
}
};

int main(){
    linkedlist l;
    l.append(1);
    l.append(1);
    l.append(1);
    l.append(1);
    l.append(1);
    l.append(1);
    l.append(1);
   int i= l.count(l.head);
   cout<<"Count: "<<i<<endl;
}