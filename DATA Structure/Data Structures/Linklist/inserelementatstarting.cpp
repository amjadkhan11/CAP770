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
  Node* third=new Node(10);
  head->next=second;
  second->next=third;
  int x=1;
  int value=30;
   Node *temp=head;
   --x;
  while(x--){
  temp=temp->next;
  }
 Node* temp2=new Node(15);
 temp2->next=temp->next;
 temp->next=temp2;
 temp=head;
  
  while (temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  
}