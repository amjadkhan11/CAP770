#include<iostream>
using namespace std;
int size=10;
int top=-1;
int front=-1;
int queue[10];
void push(int value){
     if(top==size-1){
      cout<<"queue is full"<<endl;
     }else if(top==-1 && front==-1){
         top++;
         front++;
           queue[top]=value;
           cout<<"value is pushed in the queue"<<endl;
     }else{
          top++;
          queue[top]=value;
          cout<<"value is pushed in the queue"<<endl;
     }
}
void pop(){
   if(top==-1){
      cout<<"No element in the queue to pop"<<endl;
   }else if(front==top){
      front=top=-1;
   }else{
      front++;
   }
}
void display(){
   if(front==-1){
      cout<<"No element in the queue to display"<<endl;
   }
   while(front<=top){
      cout<<queue[front]<<" ";
      front++;
   }
   cout<<endl;
}
void issize(){
   cout<<"The size of the queue is";
   if(front==-1){
      cout<<"0"<<endl;
   }else{
      cout<<(top-front)+1<<endl;
   }
}
void empty(){
   if(front==-1){
      cout<<"queue is empty"<<endl;
   }else{
         cout<<"queue is not empty"<<endl;
   }
}
void full(){
   if(top==size-1){
      cout<<"queue is full"<<endl;

   }
   else{
      cout<<"queue is not full"<<endl;
   }
}
int main(){
   int value,choice;
   while(1){
    cout<<"1.For pushing in the queue"<<endl;
    cout<<"2.For removing from the queue"<<endl;
    cout<<"3.For Displaying the whole queue"<<endl;
    cout<<"4.For Size of the queue"<<endl;
    cout<<"5.For knowing queue is empty or not"<<endl;
    cout<<"6.For knowing queue is full or not"<<endl;
    cout<<"7.For Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice==7){
      exit(0);
    }
    switch(choice){
      case 1:
           cout<<"Enter the value you want to push"<<endl;
           cin>>value;
           push(value);
           break;
      case 2:
           cout<<"Element is removed from the queue"<<endl;
           pop();
           break;
      case 3:
           cout<<"The elements in the queue are"<<endl;
           display();
           break;
      case 4:
           issize();
           break;
      case 5:
           empty();
           break;
      case 6:
          full();
           break;
    }
   }
}