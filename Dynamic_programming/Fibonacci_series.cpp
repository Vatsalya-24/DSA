#include<iostream>

using namespace std;
 
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
void fib1(int n)
{
    int f[n];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<n;i++){
        f[i]=f[i-1]+f[i-2];
    }
    cout<<"-----\n";
    for( int i=0;i<n;i++)
   cout<<f[i]<<"\n";
}
 
int main()
{
    int n = 3;
    for( int i=0;i<n;i++)
   cout<<fib(i)<<"\n";
   fib1(n);
    return 0;
}