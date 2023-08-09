#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec={5,4,3,8,6,5,0,3,6};
for(int j=0;j<vec.size();j++){

    for(int i=0;i<vec.size();i++){
        if(vec[i]>vec[i+1]){
            swap(vec[i],vec[i+1]);
        }
    }
}
    for(int i=0;i<vec.size();i++){
        cout<<vec[i];
    }
    return 0;
}