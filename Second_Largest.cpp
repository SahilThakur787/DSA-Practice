#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,1,5,7,3};
    int max=0;
    int second_max=arr[0];
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]>max){
            second_max=max;
            max=arr[i];
        }
    }
    cout<<"the second largest element is "<<second_max<<endl;
    cout<<"the second largest element is "<<max;
}