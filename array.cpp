#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the array size ";
    cin>>size;
    int  Array[size],i;
    cout<<"Enter numbers: \n";
    for(i=0;i<size;i++)
        cin>>Array[i];
    cout<<"The inputed numbers are : \n";
    for(i=0;i<size;i++)
        cout<<Array[i]<<" ";
}
