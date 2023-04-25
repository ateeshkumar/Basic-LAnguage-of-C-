#include<iostream>
using namespace std;
void print(int *arr, int e,int s){
    for (int i = s; i <= e; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int BinaryRecursion(int *arr,int n,int e,int s){
    print(arr,e,s);
    int mid = (e+s)/2;
    if(s>e){
        return -1;
    }
    if(arr[mid]==n){
        return mid;
    }else if(arr[mid]<n){
        return BinaryRecursion(arr,n,e,mid+1); 
    }else{
        return BinaryRecursion(arr,n,mid-1,0);
    }
}
int lenearsearch(int *arr,int n, int s){
    if(s==0){
        return -1;
    }
    if(arr[0]==n){
        return true;
    }
    return lenearsearch(arr+1,n,s-1);
}
int main(){
    int arr[]= {1,2,3,4,5,6,7};
    int n = 3;
    cout<<"The Index of the element is:"<<lenearsearch(arr,n,7)<<endl;
    cout<<"The Index of the element is:"<<BinaryRecursion(arr,n,7,0)<<endl;
    return 0;
}