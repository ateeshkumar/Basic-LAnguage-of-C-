#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    for (int i = 1; i <=6; i++)
    {
        if (i%2==0)
        {
            swap(arr[i-2],arr[i-1]);
        }
    }
    for (int j = 0; j < 6; j++)
    {
        cout<<arr[j]<<" ";
    }
    
    
    return 0;
}