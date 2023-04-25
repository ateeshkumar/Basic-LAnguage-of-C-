#include<iostream>
using namespace std;
string reverse(string str,int i){
    int n = str.length()-1;
    int j= n-i;
    if(j<i){
        return str;
    }else{
        swap(str[i],str[j]);
        i++;
        // j--;
        return reverse(str,i);
    }
}
int main(){
    string str = "abbcbba";
    string s = reverse(str,0);
    if(str==s){
        cout<<"String is pallidrome"<<endl;
    }else{
        cout<<"String is not pallidrome"<<endl;
    }
    return 0;
}