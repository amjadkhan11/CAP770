#include<iostream>
using namespace std;
int main(){
    int i,sum=0;
    cout<<"enter the four digit number"<<endl;
        int z=i;
        cin>>i;

    for(int i=0;i<=4;i++){
        sum=sum+i%10;
        i=i/10;

    }
    if(sum%3==0||sum%5==0||sum%7==0){
        cout<<"valid number"<<endl;

    }
    else{
               cout<<"not valid "<<endl;
    
   
}
}