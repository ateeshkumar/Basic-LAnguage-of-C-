#include<iostream>
#include<vector>
using namespace std;
vector<int> prime(int n){
    vector<int> primes;
    vector<bool>store(n+1,true);
    store[0]=store[1] = false;
    for (int i = 2; i <n; i++)
    {
        if(store[i]){
            primes.push_back(i);
            for (int j = 2*i; j < n; j= j+i)
            {
                store[j]= 0;
            }
        }
    }
    return primes;   
}
void print(int n){
    vector<int> arr = prime(n);
    int s = arr.size();
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<" ";
    }   
}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}