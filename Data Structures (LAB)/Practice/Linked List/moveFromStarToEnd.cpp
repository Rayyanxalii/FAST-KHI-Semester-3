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

linkedlist(){
    head=NULL;
    tail=NULL;
}

void createAtEnd(int val){
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
    int ans;
    cout<<"how many elements u want to move from front to end: "<<endl;
    cin>>ans;
    cout<<endl;
    
    for(int i=0;i<ans;i++){
      tail->next=head;
      tail=head;
      head=head->next;
        tail->next=nullptr;
    }
}

void print(){
    node *temp=head;
    while(head!=NULL){
        cout<<" "<<temp->data;
       temp=temp->next;
    }
}

};

int main(){
    linkedlist l;
    l.createAtEnd(1);
     l.createAtEnd(2);
      l.createAtEnd(3);
       l.createAtEnd(4);
        l.createAtEnd(5);
         l.createAtEnd(6);

         l.move();
         l.print();
}