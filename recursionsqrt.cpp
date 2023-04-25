#include<iostream>
using namespace std;
int store = -1;
int sqrt(int s,int n,int e){
    int mid = (s+e)/2;
    int x = mid*mid;
    if(e<s){
        return -1;  
    }else if(n<=x){
        store = mid;
        e = mid-1;
        sqrt(0,n,e);
    }else{
        s = mid+1;
        sqrt(s,n,e);
    }
    
}
int main(){
    int n;
    cin>>n;
    sqrt(0,n,n);
    cout<<store;
    return 0;
}