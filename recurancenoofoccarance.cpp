#include<iostream>
using namespace std;
int store = -1;
int firstoccarance(int *arr, int s, int e, int key){
    int mid = (e+s)/2;
    if(e<s){
        return 0;
    }
    if(arr[mid]==key){
        store = mid;
        firstoccarance(arr,s,mid-1,key);
    }else if(arr[mid]<key){
        firstoccarance(arr,mid+1,e,key);
    }else{
        firstoccarance(arr,s,mid-1,key);
    }
    // return store;
}
int main(){
    int arr[]= {1,2,3,4,4,4,8,8,9};
    firstoccarance(arr,0,9,8);
    cout<<store<<endl;
    return 0;
}