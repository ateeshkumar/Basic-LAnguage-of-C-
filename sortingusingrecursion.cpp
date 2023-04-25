#include<iostream>
using namespace std;
void recursion(int *arr ,int n){
    int min = 0;
    if(n==1){
        return;
    }
    for(int i = 1;i<n;i++){
        if(arr[0]>arr[i]){
            swap(arr[0],arr[i]);
        }
    }
    recursion(arr+1,n-1);
}
int main(){
    int arr[6]={0,2,1,2,0,1};
    int size = 6;
    recursion(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}