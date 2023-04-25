#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>s;
    s.push_back(1);
    s.push_back(5);
    s.push_back(17);
    s.push_back(2);
    s.push_back(9);
    s.push_back(8);
    sort(s.begin(),s.end());
    int k = s.size();
    for(int i = 0; i<k;i++){
        cout<<s[i]<<" ";
    }
    return 0;
}