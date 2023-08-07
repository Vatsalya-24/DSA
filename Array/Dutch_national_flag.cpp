#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,0,2,1,1,2,0,1,2,0};
    int first=0,last=9,mid=0;
  
    int temp;
    while(mid<=last){
        if(arr[mid]==1 ){
            mid++;
        }
        else if(arr[mid]==0){   
            temp=arr[first];
            arr[first]=arr[mid];
            arr[mid]=temp;
            first++;                                                
        }
        else if(arr[mid]==2){
            temp=arr[last];
            arr[last]=arr[mid];
            arr[mid]=temp;
            last--;
            if(arr[last]==2){
            last--;
        }
    }
       
    }
    for(int i=0;i<=9;i++){
        cout<<" "<<arr[i]<<endl;
    }
    return 0;
}