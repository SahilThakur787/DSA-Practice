#include<iostream>
using namespace std;
int main(){
    int arr[]={0,0,1,1,1,2,2,3,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arr_2[n]={0};
    arr_2[0]=arr[0];
    int j=0;
    int count=1;
    for(int i=0;i<=n-1;i++){
            if(arr[i]!=arr_2[j]){
                arr_2[j+1]=arr[i];
                count++;
                j++;
            }
        
    }
    cout<<"the length of the array is "<<count;

}