#include<iostream>
using namespace std;
int store = -1;
int pivot(int *arr, int e,int s){
    int mid = (e+s)/2;
    if(e<s){
        return -1;
    }
    if(arr[mid]>=arr[0]){
        store = mid+1;
        s = mid+1;
        pivot(arr,e,s);
    }else{
        e = mid;
        pivot(arr,e,s);
    }
}
int main(){
    int arr[] = {7,4,5,9,3,12};
    pivot(arr,5,0);
    cout<<store<<endl;
    return 0;
}