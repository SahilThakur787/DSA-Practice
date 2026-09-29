#include<iostream>
using namespace std;
int main(){
    int arr[]={1,20,10,4,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
      int m=arr[0];
      int count=0;
      int count_2=0;
    for(int i=0;i<n-1;i++){
      if(arr[i]>=m){
        m=arr[i];
        count++;
      }
    }
        for(int i=n-1;i>0;i--){
            if(arr[i]<=arr[i-1]){
            count_2++;
        }
    }
    if(count==n-1 ||  count_2==n-1){
        cout<<"the array is sorted";
    }
    else{
        cout<<"the array is not sorted";
    }


}