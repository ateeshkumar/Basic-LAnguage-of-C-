#include<iostream>
using namespace std;
void insertionsort(int *arr, int n){
    if(n==0 || n==1){
        return;
    }
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        if(arr[i-1]>temp){
            arr[i]=arr[i-1];
        }
    }
    
}
int main(){
    int arr[] = {34,11,9,45,20};
    insertionsort(arr,5);
    return 0;
}