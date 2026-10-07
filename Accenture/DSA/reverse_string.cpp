#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;

    int left ;
    int right = str.size()-1;

    while(left<right){
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
    cout<<"Reverse String is : "<<str<<endl;

}
