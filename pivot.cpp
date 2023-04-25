#include<iostream>
using namespace std;
int pivot(int *arr,int n){
    int s = 0;
    int e = n-1;
    int mid = (e+s)/2;
    while (s<e) 
    {
        if(arr[mid]>=arr[0]){
            s = mid +1;
        }else{
            e = mid;
        }
        mid = (s+e)/2;
    }
    return s;
    
}
int main(){
int arr[] = {7,4,5,9,3,12};
cout<<pivot(arr,6)<<endl;
    return 0;
}