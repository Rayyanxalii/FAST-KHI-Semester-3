#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int val){
        data=val;
        next=NULL;
    }
};

class linkedlist{
    public:
    node *head=NULL;
    node *tail=NULL;
    

    void createAtEnd(int val){
    if(head==NULL){
        head= new node(val);
        tail=head;
    }
    else{
        tail->next= new node(val);
        tail= tail->next;
    }
    }

    int findMax(node *ptr){
        int max= 0;
        while(ptr){
          if(ptr->data>max){
            max=ptr->data;
          }
          ptr=ptr->next;
        }
        return max;
    }
};

int main(){
    linkedlist l;
    l.createAtEnd(5);
     l.createAtEnd(9);
      l.createAtEnd(55);
       l.createAtEnd(9);
        l.createAtEnd(93);

int m=l.findMax(l.head);
cout<<"Max: "<<m<<endl;
}