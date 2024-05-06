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
Node *head=new Node(5);
Node *first=new Node(6);
Node *second=new Node(8);
head->next=first;
first->next=second;
Node *temp=head;
Node *prev=NULL;
int x;
cout<<"enter the node which you want to delete: "<<endl;
cin>>x;
if(x>0){
while(x>0){
  prev=temp;
  temp=temp->next;
  x--;
}
prev->next=temp->next;
temp=head;
}
else{
  prev=temp->next;
  temp=prev;
}
while(temp!=NULL){
  cout<<temp->data<<" ";
  temp=temp->next;
}
}