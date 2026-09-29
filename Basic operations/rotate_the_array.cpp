#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=3;
    int temp[key]={};
    for(int i=0;i<=key;i++){
        temp[i]=arr[i];
    }

    for(int i=key;i<n;i++){
        arr[i-key]=arr[i];
    }
    int j=0;
    for(int i=n-key;i<n;i++){
        arr[i]=temp[j];
        j++;
    }
    cout<<"done:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

// the above code is broot force code

// the optimized way for this wwe have to reverse from 0 to k and from k+1 to n then reverse the whole arrray


#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    reverse(arr,0,k);
    reverse(arr,k+1,n-1);
    reverse(arr,0,n-1);


    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
// this is code for that