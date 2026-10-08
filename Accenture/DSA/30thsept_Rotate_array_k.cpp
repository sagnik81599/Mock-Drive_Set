#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& nums,int start,int end){
    while(start<end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }

}
    int main(){
        int n;
        cin>>n;

        vector<int>nums(n);

        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        int k;
        cout<<"enter the targer to reverse"<<endl;
        cin>>k;

        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,k-1);
        
        cout<<"Reverse Array :";
        for(int i=0;i<n;i++){
            cout<<nums[i];
        }
    }
