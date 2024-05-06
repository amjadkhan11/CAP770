#include<iostream>
using namespace std;
class  Node{
  public:
  int data;
  Node* next;
  Node(int data){
    this->data=data;
    next=NULL;
  }
};


int main(){
  Node* head=new Node(4);
  Node* second=new Node(5);
  head->next=second;
  Node *temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  Node* o1;
  o1=new Node(10);
  temp->next=o1;
  temp=head;
  while (temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  
}