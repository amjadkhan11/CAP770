#include<iostream>
using namespace std;
int main(){
    int n[10];//={1,2,3,4,5,7};
    for(int i=1;i<=n[i];i++){
        cout<<n[i];

    }
    cout<<"enter the number"<<endl;
    int n;
    cin>>n;
   int  j=n;
   int index;
   cout<<"enter the index"<<endl;
    cin>>index;
    int key ;
    cout<<"enter the key"<<endl;
    cin>>key;

    while(j>=index)
    {
        arr[j+1]=arr[j];
        j--;

    }
    arr[index]=key;
    for(int i=0;i<=n;i++){
        cout<<arr[i];

    }

}