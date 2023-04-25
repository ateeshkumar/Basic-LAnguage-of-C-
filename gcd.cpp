#include<iostream>
using namespace std;
int smaller(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}
int gcd(int a, int b){
    int ans=-1;
    int n = smaller(a,b);
    if (n==1)
    {
        return 1;
    }
    
    for (int i = 2; i <=n; i++)
    {
        if(a%i==0 && b%i==0){
            ans = i;
        }
    }
    return ans;
    
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;

    return 0;
}