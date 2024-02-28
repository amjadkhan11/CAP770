#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,7};
    int n=6;
   
   int k=1;
   int l=k;

    while(n<=l)
    {
        arr[n]=arr[n+1];
        n++;

    }
    n=n-1;
    for(int i=0; i<=n;i++){
        cout<<arr[i]<<" ";

    }

}