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

   void createAtPosition(int val, int pos){
       node *n= new node(val);
       if(head==NULL){
        head=n;
        tail=n;
       }
       else{
        node *p=head;
        for(int i=0; i<pos-2 && p!=NULL;i++){
         p=p->next;
        }
        if(pos==1){
            n->next=head;
            head=n;
        }
        else if(pos==2 || pos>2){
        n->next=p->next;
        p->next=n;
       }
       }
   }

   void display(){
    node *ptr = head;
    while(ptr!=NULL){
        cout<<" "<<ptr->data;
        ptr= ptr->next;
    }
   }

};


int main(){
    list l;
    
    l.createAtStart(1);
    l.display();
    cout<<endl;
    l.createAtStart(2);
    l.createAtStart(3);
    l.display();
    cout<<endl;
    l.createAtPosition(5,1);
    l.display();
    cout<<endl;
     l.createAtPosition(4,2);
    l.display();
    cout<<endl;
    l.createAtPosition(9,6);
    l.display();

    
}