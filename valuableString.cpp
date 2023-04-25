#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;
class Solution {
    private:
    bool isVovel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;
    }
    int valid(string s){
        int n = s.length();
        int count = 0;
        for(int i = 0;i<n;i++){
            if(isVovel(s[i])){
                count++;
            }
        }
        // int c = n-count;
        int x = abs(n-2*count);
        // cout<<count<<" "<<x<<" "<<n<<endl;
        return x;
    }
  public:
    string valuableString(int n, vector<string> &arr) {
        int per[n];
        for(int i = 0;i<n;i++){
            per[i]=valid(arr[i]);
        }
        int x = 0;
        for(int i = 0;i<n;i++){
            if(per[x]<per[i]){
                x = i;
            }
        }
        return arr[x];
        
    }
};
int main(){
    Solution s;
    vector<string>v;
    v.push_back("iabd");
    v.push_back("utxrfqdva");
    v.push_back("ccgbugwg");
    v.push_back("lj");
    cout<<s.valuableString(4,v);
    

return 0;
}