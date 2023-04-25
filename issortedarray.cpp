#include<iostream>
using namespace std;
bool issorted(int *arr,int size){
    if (size==0 || size==1)
    {
        return true;
    }
    if (arr[0]>arr[1])
    {
        return false;
    }else{
        return issorted(arr+1,size-1);
    }
    
    
}

int main(){
    int arr[6]= {3,5,9,14,19,23};
    cout<<issorted(arr,6)<<endl;

    return 0;
}