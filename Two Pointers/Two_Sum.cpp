#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={2,7,11,15};
     vector<int> ans;
    int n=arr.size();
    int i=0;
    int j=n-1;
    int target =9;
    while(i<=j){
        int sum=arr[i]+arr[j];
        if(sum==target){
            ans.push_back(i);
            ans.push_back(j);
        }else if(sum>target){
            j--;
        }else{
            i++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}