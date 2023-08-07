#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> vec={1,2,3,34,8,6};
    int val;
    cout<<"Enter the number you want:";
    cin>>val;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==val){
            cout<<"Found!!!";
        }
    }   
    return 0;
}