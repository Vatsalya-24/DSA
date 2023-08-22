#include<iostream>
using namespace std;

int cata(int num){
    int res =0;
    if(num==0 || num==1)
        return 1;
    for (int i = 0; i < num; i++)
        res += cata(i) * cata(num - i - 1);
    return res;

}

int main(){
    int num=5; 
    for( int i=0;i<5;i++)
        cout<<cata(i)<<"\n";
    cata(num);

    return 0;
}