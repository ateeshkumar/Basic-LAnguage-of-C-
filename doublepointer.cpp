#include<iostream>
using namespace std;
// void usep(int **p){
//     p= p+1;
// }
// void usestarp(int **p){
//     *p= *p+1;
// }
// void usedstarp(int **p){
//     **p= **p+1;
// }
// void fun(int a[]) {
//     cout << a[0] << " ";
// }

    

int main(){
    // int a = 12;
    // int *p = &a;
    // int **p1 = &p;
    // cout<<a<<endl;
    // usep(p1);
    // cout<<a<<endl;
    // usestarp(p1);
    // cout<<a<<endl;
    // usedstarp(p1);
    // cout<<a<<endl;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<p1<<endl;
    // cout<<*p1<<endl;
    // cout<<**p1<<endl;
    char  s[] = "ABCD";

    // cout<<(*s)+1<<endl;
    // int a[] = {1, 2, 3, 4};
    // fun(a + 1);
    // cout << a[0]<<endl;

    int a = 7;
int *c = &a;
c = c + 3;
cout<< c << endl;
    return 0;
}