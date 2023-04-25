#include<iostream>
using namespace std;
int main(){
    int n = 7;
    int a[n]= {1,56,34,2,7,8,9};
    int  b = 25;
    int cail = 0;
    int foolr = 0;
    for(int i = n-1; i>=0;i--){
        if(b>=a[i]){
            cail = a[i]; 
        }
    }
    for(int j= 0;j<n; j++){
        if(b<=a[j]){
            foolr = a[j];
        }
    }
    cout<<cail<<" "<<foolr<<endl;
    return 0;
}