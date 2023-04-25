#include<iostream>
using namespace std;
void bobblesort(int* arr,int n){
    if (n==0 || n==1)
    {
        return ;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bobblesort(arr,n-1);
}
void print(int *arr,int n){
    if(n==0){
        return;
    }
    cout<<arr[0]<<" ";
    print(arr+1,n-1);
}
int main(){
    int arr[]= {12,5,10,17,8,21,9};
    bobblesort(arr,7);
    print(arr,7);
    return 0;
}