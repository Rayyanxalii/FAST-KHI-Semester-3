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

bool check(){
    node *p=head;
    int x= -32768;
    
    while(p!=NULL){
        if(p->data<x){
            return false;
        }
        x=p->data;
        p=p->next;
    }
    return true;
}

};

int main(){
    linkedlist l;
    l.append(1);
    l.append(2);
    l.append(5);
    l.append(10);
   cout<<" "<<l.check()<<endl;
}