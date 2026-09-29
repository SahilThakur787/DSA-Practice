
#include <iostream>
using namespace std;
int main() {
int arr[]={1,5,1,4,7};
int max=0;
    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
         max=arr[0];
        if(arr[i]>=max){
            max=arr[i];
        }
    }
cout<<max;
}