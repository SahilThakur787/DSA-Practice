#include<iostream>
using namespace std;
int main(){
    int arr[]={1, 4, 3, 2, 6, 5};
    int n =sizeof(arr)/sizeof(arr[0]);
    int j=n-1;
    int i=0;
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        i++;
    }
    cout<<"the reversed array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}