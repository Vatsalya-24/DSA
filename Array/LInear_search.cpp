#include<iostream>
#include<vector>
using namespace std;
 int main(){
    vector<int>arr;
    int n;
    bool temp=false;
    cout<<"Decide the size of the array:";
    cin>>n;
    cout<<"\nEnter the values: ";
    int data;
    for(int i=0;i<n;i++){
        cin>>data;
        arr.push_back(data);
    }
    int value;
    cout<<"\nEnter the element u want to search:";
    cin>>value;
    for(int i=0;i<n;i++){
        if(value==arr[i]){
            temp=true;
        }
    }
   string result = (temp==true) ? "found!!" : "not found!!";
   cout<< result;
   return 0;

 }