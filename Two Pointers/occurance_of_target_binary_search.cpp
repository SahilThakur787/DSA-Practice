#include<iostream>
using namespace std;
int main(){
    int arr[]={2,2,3,3,3,3,4};
    int low_0=0;
    int high_0=sizeof(arr)/sizeof(arr[0])-1;
    int target=3; 
    int low_1=0;
    int high_1=sizeof(arr)/sizeof(arr[0])-1;
    int first=-1;
    int last=-1;

    while(low_0<=high_0){
        int mid=(low_0+high_0)/2;
        if(arr[mid]==target){
            first=mid;
            high_0=mid-1;
        }
        else if(arr[mid]<target){
            low_0=mid+1;
        }
        else{
            high_0=mid-1;
        }
    }

    while(low_1<=high_1){
        int mid=(low_1+high_1)/2;
        if(arr[mid]==target){
            last=mid;
            low_1=mid+1;
        }
        else if(arr[mid]<target){
            low_1=mid+1;
        }
        else{
            high_1=mid-1;
        }
    }
    cout<<"the length is "<<last-first+1;
}