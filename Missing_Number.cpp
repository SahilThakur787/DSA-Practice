#include<iostream>
using namespace std;
int main(){
    int arr[]={9,6,4,2,3,5,7,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    int f=0;
    for(int j=0;j<n;j++){
        if(i==arr[j]){
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"the missing element is "<<i;
    }
}

}