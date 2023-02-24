#include<iostream>
using namespace std;
int main()
{
    int size,item;
    cout<<"Enter the array size: ";
    cin>>size;
    int array[size],i,beg=0,end=size-1,mid=(beg+end)/2;
    for(i=0; i<size; i++)
    {
        cin>>array[i];
    }
    for(i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl<<"Enter the searching element ";
    cin>>item;
    while(beg<=end&&array[mid]!=item)
    {
        if(item>array[mid])
            beg=mid+1;
        else
            end=mid-1;
        mid=(beg+end)/2;
    }
    cout<<endl;
    if(item==array[mid])
        cout<<mid<<" is the location array" <<item;
    else
        cout<<"item not found in the array list";
    }
