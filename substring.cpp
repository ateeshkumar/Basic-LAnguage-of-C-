#include<iostream>
using namespace std;
bool repeatedSubstringPattern(string s) {
        string sub = "";
        
        int k = sub.length();
        char ch[k];
         for(int i=0;i<s.length();i++){
             if(s.length()%k){
                 break;
             }else{
                 sub += s[i];
             }
        }
        int l = 0;
        for(int j=k;j<k*2;j++){
                ch[l]= s[j];
                // cout<<s[j]<<endl;
                l++;
        }
        // for(int j = 0; j<sub.length();j++){
        //     if(sub[j]==s[k]){
        //         k++;
        //     }
        // } 
        cout<<sub<<endl;
        cout<<ch<<endl;
        if(sub==ch){
            return true;
        }
        return false;
    }
int main(){
    cout<<repeatedSubstringPattern("abab");

return 0;
}