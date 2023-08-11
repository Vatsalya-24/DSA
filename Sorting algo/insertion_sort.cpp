#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec={3,4,2,6,8,5,4,9,7,4,3,1};
    for(int i=1;i<vec.size();i++){
        for(int j=0;j<i;j++){
            if(vec[i]<vec[j]){
                swap(vec[i],vec[j]);
            }
        }
    }
    for(int i=0 ;i<vec.size();i++){
        cout<<vec[i];
    }
    return 0;
}