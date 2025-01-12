#include<iostream>
using namespace std;

class node{
public:  

   int data;
   node *next;

   
   node(){
    data=0;
    next=NULL;
   }

   node(int v){
    data=v;
    next=NULL;
   }
};

class list{
    private:
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

   void deleteDuplicate(){
    node *r= head;
    node *q=head;
    node *p=head->next;

    while(r!=NULL){
       q=r;
       p=r->next;

        while(p!=NULL){
            if(r->data==p->data){
                q->next=p->next;
                delete p;
                p= q->next;
            }
            else{
                q=p;
                p=p->next;
            }
        }
        r= r->next;
    }
    cout<<"Duplicates Deleted\n";
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
    list l;
    l.createAtStart(5);
    l.createAtStart(4);
    l.createAtStart(3);
    l.createAtStart(2);
    l.createAtStart(4);
    l.createAtStart(2);
    l.createAtStart(5);
    l.createAtStart(1);
    l.print();
    cout<<endl;
    l.deleteDuplicate();
    l.print();
}