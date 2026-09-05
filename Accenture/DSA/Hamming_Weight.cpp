#include<iostream>

using namespace std;

int hamming(int n){
    int count=0;
    while(n>0){
        if(n%2==1){
            count++;
        }

        n = n>>1;
    }
    return count;
}

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;

    int ans = hamming(n);
    cout<<ans;
}