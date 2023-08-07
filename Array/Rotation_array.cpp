#include<iostream>
using namespace std;
  
int main(){
int arr[5]={1,3,34,5,6};
int temp,first=0;
temp= arr[first];
while(first<4){

arr[first]=arr[first+1];
first++;
}
arr[first]=temp;

for(int i=0;i<5;i++){
    cout<<arr[i]<<"  "<<endl;
}
return 0;
}
