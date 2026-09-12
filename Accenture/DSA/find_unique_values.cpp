// leetcode 1748

#include<iostream>
#include<string.h>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int> count; //counts frequency of each number. 4 → 2 times
// 5 → 2 times
// 6 → 1 time
// 7 → 1 time
// 9 → 1 time

    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    // now print Unique element
    for(int i=0;i<n;i++){
        if(count[arr[i]] == 1){
            cout<<arr[i];
        }
    }
}