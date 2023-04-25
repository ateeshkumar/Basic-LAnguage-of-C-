#include<iostream>
using namespace std;
int sum(int *arr,int n){
    if(n==1){
        return arr[0];
    }
    return arr[0]+sum(arr+1,n-1);;
}
int main(){
    int arr[] = {5,6,8,45,7,3,1};
    cout<<sum(arr,7)<<endl;
    return 0;
}