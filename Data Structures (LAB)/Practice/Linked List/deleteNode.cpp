#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int v){
        data=v;
        next=NULL;
    }
};

class list{
    public:
    node *head=NULL;
    node *tail=NULL;

public:

   void createAtStart(int val){
       node *n= new node(val);
       if(head==NULL){
        head=n;
        tail=n;
       }
       else{
         n->next=head;
         head=n;
       }
   }

   int deleteNode(int pos){
       node *p=head;
       node *q=NULL;

  if(pos==1){
        head=head->next;
        int x= p->data;
        delete p;
        return x;
       }

       for(int i=0; i<pos-1 && p!=NULL; i++){
        q=p;
        p=p->next;
       }

        if( p!=NULL){
        q->next=p->next;
        int a= p->data;
        delete p;
        return a;
       }
       else{
        cout<<"Wrong Position"<<endl;
       }
   }
   void print(){
    node *ptr=head;
   while(ptr!= NULL){
    cout<<" "<<ptr->data;
    ptr=ptr->next;
   }
}
};

int main(){
    list l;
    l.createAtStart(1);
    l.createAtStart(2);
    l.createAtStart(3);
    l.createAtStart(4);
    l.createAtStart(5);
    l.print();
    cout<<endl;
    int t= l.deleteNode(2);
    l.print();
     cout<<endl;
    cout<<"Deleted value: "<<t<<endl;
         cout<<endl;
}