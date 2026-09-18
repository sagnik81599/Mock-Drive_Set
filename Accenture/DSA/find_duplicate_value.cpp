#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of No: "<<endl;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int> count;

    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    
    // for(int i=0;i<n;i++){
    //    cout<<count;
    // }
    // cout<<arr[i];
//   for(auto x :count){
//      cout<<x.first<<"->"<<x.second<<endl;
//   }

    for(int i=0;i<n;i++){
        if(count[arr[i]] == 2){
            cout<<arr[i]<<" ";
        }
    }
}