#include<iostream>
using namespace std;

int main(){
    int sum;
    int arr[5]={-1,2,-3,4,5};
    int temp=arr[0];
    for(int i=0;i<5;i++){
        sum=0;
        for(int j=0;j<5;j++){
            sum=sum+arr[j];
            if(sum>temp){
                temp=sum;
            }
        }
    }
    cout<<"greatest number in countigious array is"<<" "<<temp<<endl;
    return 0;

}