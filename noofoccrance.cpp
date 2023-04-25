#include<iostream>
using namespace std;
int fristoccrance(int arr[],int size,int key){
    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;
    int store = -1;
    while (s<=e)
    {
        if(arr[mid]==key){
            store = mid;
            e = mid-1;
        }else if (key>arr[mid])
        {
            s = mid+1;
        }else{
            e = mid -1;
        }
        mid = s+(e-s)/2;
    }
    return store;
}
int lastoccrance(int arr[],int size,int key){
    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;
    int store = -1;
    while (s<=e)
    {
        if(arr[mid]==key){
            store = mid;
            s = mid+1;
        }else if (key>arr[mid])
        {
            s = mid+1;
        }else{
            e = mid -1;
        }
        mid = s+(e-s)/2;
        
    }
    return store;
}
int main(){
    int odd[]={1,2,4,4,6,9,10};
    int even[] = {1,4,8,8,8,9}; 
    cout<<"The even of the array at index "<<fristoccrance(even,6,8)<<endl;
    cout<<"The odd of the array at index "<<fristoccrance(odd,7,4)<<endl;
    cout<<"The even of the array at index "<<lastoccrance(even,6,8)<<endl;
    cout<<"The odd of the array at index "<<lastoccrance(odd,7,4)<<endl;

    
    return 0;
}