#include<iostream>
using namespace std;

void reverseArray(std::vector<int> &arr, int m) {
    int n = arr.size();
    
    if (m < 0 || m >= n) {
        std::cout << "Invalid position 'm'." << std::endl;
        return;
    }

   
    for (int i = m, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
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