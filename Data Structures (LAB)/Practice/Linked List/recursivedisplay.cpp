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

class linkedlist{
    public:
  node *head=NULL;

  void append(int val){
    if(head==NULL){
        head= new node(val);
    }
    else{
        node *n= new node(val);
        node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
         temp->next=n;
         n->next=NULL;
    }
  }
  void display1(node *ptr) {               // RECURSIVE DISPLAY FORWARD
      if(ptr!=NULL){
        cout<<" "<<ptr->data<<endl;
        display1(ptr->next);
      }
  }    
  void display2(node *ptr) {               // RECURSIVE DISPLAY BACKWARD
      if(ptr!=NULL){
         display2(ptr->next);
        cout<<" "<<ptr->data<<endl; 
      }
  }  
};

int main(){
linkedlist l1;
l1.append(2);
l1.append(4);
l1.append(6);
l1.append(8);
l1.display1(l1.head);
cout<<endl<<endl;
l1.display2(l1.head);
return 0;
}