#include<iostream>
using namespace std;


int bino(int n,int k){

    if(k>n)
        return 0;
    if(k==0 || k==n)
        return 1;

    return bino(n-1,k-1)+bino(n-1,k);
}
int main(){
    cout << "Value of C() is "
         << bino(5, 2);

    return 0;
}