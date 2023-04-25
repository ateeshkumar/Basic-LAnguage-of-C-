#include<iostream>
using namespace std;
int binarysearch(int arr[],int size, int key){
    int s = 0;
    int e = size-1;
    int mid = (e+s)/2;
    while (s<=e)
    {   
        if(arr[mid] == key){
        return mid;
        }
        else if(key>arr[mid]){
            s = mid+1;
        }else{
            e = mid-1;
            
        }
        cout<<"fagjd"<<endl;
        mid = (e+s)/2; 
    }
    return -1;
}
int main(){
    int even[]= {2,4,6,8,10,56};
    int odd[]= {1,12,25,48,55,60,76};
    int key =25;
    cout<<"The index of the "<<key<<" is "<<binarysearch(odd,7,25);
    cout<<"The index of the "<<key<<" is "<<binarysearch(even,6,25);



    return 0;
}