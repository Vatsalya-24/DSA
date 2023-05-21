#include<iostream>
using namespace std;
int main()
{
    int arr[10],val;

    for(int i=0;i<10;i++)
    {
        cout<<"enter the elements :";
        cin>>arr[i];
    }
    cout<<"\nenter the searchind element:";
    cin>>val;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==val)
        {
            cout<<"\nthe elemnet found at position: "<<arr[i];
        }
        else
        {
            cout<<"\n1not at: "<<arr[i];
        }

    }
    return 0;

}