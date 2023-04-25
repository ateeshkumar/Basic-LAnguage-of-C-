#include<iostream>
using namespace std;
void saydigit(int n){
    if(n==0){
        return ;
    }
    string arr[] = {"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    int digit  = n%10;

    saydigit(n/10);
    cout<<arr[digit]<<" ";
}
int main(){
    int n;
    cin>>n;
    saydigit(n);
    return 0;
}