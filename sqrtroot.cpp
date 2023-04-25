#include<iostream>
using namespace std;
long long sqrtroot(int n){
    long long ans = -1;
    int s = 0;
    int e = n;
    int mid = (e+s)/2;
    while (s<=e)
    {
        long long sqrt = mid*mid;
        if(sqrt==n){
            return mid;
        }
        if(sqrt>n){
            e = mid-1;
        }
        if(sqrt<n){
            ans = mid;
            s = mid+1;
        }
        mid = (e+s)/2;
    }
    return ans;
    
}
double moreaccurate(int n, int presio, int solution){
    double factor = 1;
    double ans = solution;
    for (int i = 0; i < presio; i++)
    {
        factor = factor/10;
        for (double j = ans; j*j <n; j= j+factor)
        {
            ans = j;
        }
        
    }
    return ans;
    
}

int main(){
    int n;
    cin>>n;
    int sol = sqrtroot(n);
    cout<<moreaccurate(n,3,sol);
    return 0;
}
