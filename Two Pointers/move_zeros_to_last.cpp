#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int main(){
    int arr[]={0,1,0,3,12};
    int i=0;
    int j=1;
    int n=sizeof(arr)/sizeof(arr[0]);
    while(j<n){
        if(arr[i]==0 && arr[j]!=0){
            swap(arr,i,j);
            i++;
        }
        j++;
    }
    cout<<"the new array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}