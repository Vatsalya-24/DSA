#include<iostream>
using namespace std;

int main()
{
    int n=10,var;
    int arr[n];
    int low=0;
    int high=n-1;
    int mid;
    
    cout<<"\nenter number of element:";
    cin>>n;
    cout<<"\nenter the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"\nrnte element want to search:";
    cin>>var;
    
    mid=(low+high)/2;

    while(arr[mid]!=var){
        
        mid=(low+high)/2;
        if(var>arr[mid]){
            low=mid;
        }
        else if (var<arr[mid])
        {
            high=mid;
        }
        else{
            cout<<"\nfound at:"<<mid+1;
        }
    }
    


    
    
    
    
    return 0;

}
