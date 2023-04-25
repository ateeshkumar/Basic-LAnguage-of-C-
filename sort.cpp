#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5] = {2,6,1,3,8};
    // sort(arr.begin(),arr.end());
    sort(arr,arr+5);
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}