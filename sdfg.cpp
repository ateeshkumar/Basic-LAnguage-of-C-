#include <bits/stdc++.h>
// #include<vector>
using namespace std;
int minimumOpration(int *arr,int n){
    set<int>s1;
    for(int i = 0; i<n; i++){
        s1.insert(arr[i]);
    }
    int j = 0;
    while(s1.empty()==0){
        int x = *(s1.rbegin());
        if(x%2==0){
            j++;
            s1.insert(x/2);
        }
        s1.erase(x);
    }
    return j;
}

int main() {
	int n;
    cin>>n;
    int A[n];
    // vector<int a(n);
    int sum = 0;
    for(int i = 0; i<n; i++){
        cin>>A[i];
        // sum+=a[i]; 
    }
    int g = minimumOpration(A,n);
    cout<<g<<endl;
    
	return 0;
}