// ARRAY
//   ↓
// LOOP
//   ↓
// INDEX calculation
//   ↓
// MODULO %
//   ↓
// IF condition
//   ↓
// SUM


#include<iostream>
#include<vector>
using namespace std;

int main(){

     vector<int> nums ={22,2,8};

     int sum = 0;

     for(int i=0;i<nums.size();i++){
        int original = nums[i];

        int value = original-(i%7)*3;

        if(original % 11 == 0){
            value = value + nums[i]/11;
        }

        sum += value;

 
     }
            cout<<sum;
}