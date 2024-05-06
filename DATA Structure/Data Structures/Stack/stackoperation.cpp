#include<iostream>
using namespace std;
 int a=10;
    int stack[10];
    int top=-1;
   void push(int);
   void pop();
   void display();
   void size();
   void iSempty();
   void iSfull();
int main(){
    
    
   while(1){
    cout<<"1.For pushing in the stack"<<endl;
    cout<<"2.For removing from the stack"<<endl;
    cout<<"3.For Displaying the whole stack"<<endl;
    cout<<"4.For Size of the stack"<<endl;
    cout<<"5.For knowing stack is empty or not"<<endl;
    cout<<"6.For knowing stack is full or not"<<endl;
    cout<<"7.For Exit";
   
   int x;
   cout<<"===Enter the choice==="<<endl;
   cin>>x;
   if(x==7){
    exit(0);
   }
   switch(x){
    case 1:
         int y;
         cin>>y;
         cout<<y<<" is pushed in the stack"<<endl;
         push(y);
         break;
    case 2:
         cout<<"Element is removed from the stack"<<endl;
         pop();
         break;
    case 3:
         cout<<"Elements in the stack are: "<<endl;
         display();
         break;
    case 4:
         cout<<"Size of the stack are: "<<endl;
         size(); 
         break;
    case 5:
         iSempty();
         break;
    case 6:
         iSfull();
         break;
   }
   }
   
    
}
 void push(int y)
    {
        if(top==a-1){
            cout<<"Stack is full overflow will occur"<<endl;
        }
        else{
            top++;
            stack[top]==y;
        }
    }
    void pop()
    {
        if(top==-1){
            cout<<"Stack is empty underflow will occurs"<<endl;
        }
        else{
            top--;
        }
    }
    void display()
    {
        if(top==-1){
            cout<<"NO element in the stack ";
        }
        else{
            int x=top+1;
            while(x){
                cout<<"Element in the stack are:"<<endl;
               cout<<stack[x-1]<<endl;
               x--;
            }
        }
    }
    void size()
    {
        if(top==-1){
            cout<<"Size is 0"<<endl;
        }
        else{
            cout<<"Size of the stack is: "<<top+1<<endl;
        }
    }
    void iSempty()
    {
        if(top==-1){
            cout<<"stack is empty"<<endl;
        }
        else{
            cout<<"stack is not empty"<<endl;
        }
    }
    void iSfull()
    {
        if(top==a-1){
            cout<<"Stack is full"<<endl;
        }
        else{
            cout<<"Stack is not full"<<endl;
        }
    }