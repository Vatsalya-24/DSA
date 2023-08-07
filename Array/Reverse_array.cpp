#include<iostream>
using namespace std;

int main(){
    
    int arr[5]={1,23,4,5,6};
 
    int first=0,last=4;
    int temp;

    while (first<last){
       temp=arr[first];
        arr[first]=arr[last];
        arr[last]=temp;
        first++;
        last--;
        ;

    }   


    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
        return 0;
}