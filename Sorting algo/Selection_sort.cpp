#include<iostream>
#include<vector>

using namespace std;


int main(){

    int vec[9]={3,1,6,2,3,9,7,5,6};
    int temp;
     for(int i=0;i<8;i++){
           temp=i;
        for(int j=i+1;j<9;j++){
           if(vec[temp]>vec[j]){
                temp=j;
            }
           
        }
       int demo=vec[temp];
       vec[temp]=vec[i];
       vec[i]=demo;
       
     }
    for(int i=0;i<9;i++){
        cout<<vec[i];
    }
    
     
    return 0;
}

