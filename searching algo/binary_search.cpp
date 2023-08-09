#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec={1,2,2,3,4,5,6,7,8};
    int first=0,last=vec.size();
    int mid=(first+last)/2;
    int val;
    cout<<"Enter the value you want:";
    cin>>val;
    
    while(last>first){

    if(vec[mid]==val){
        cout<<"found!!";
        break;
    }
    else if (val>vec[mid]){
        first=mid+1;
        mid=(first+last)/2;
    }
    else if (val<vec[mid]){
        last=mid+1;
        mid=(first+last)/2;
    }
    }
    return 0;
}