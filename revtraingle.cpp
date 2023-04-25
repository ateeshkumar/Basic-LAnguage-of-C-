#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
    while (row<=n)
    {
        int i = row;
        while (i<=n-1)
        {
            cout<<" ";
            i = i+1;
        }
        int col = 1;
        while (col<=row)
        {
            cout<<"* ";
            col = col+1;
        }
        cout<<endl;
        row = row+1;
        
        
    }
    
}