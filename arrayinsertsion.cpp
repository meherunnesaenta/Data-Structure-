#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int size,i,j,position,ITEM;
    cout<<"Enter the array size: ";
    cin>>size;
    int Array[size];
    srand (time(0));
    for(i=0;i<size;i++)
        Array[i]=rand()%50;

    cout<<"\nStored values: ";
    for(int i=0;i<size;i++)
        cout<<Array[i]<<" ";
while(1){
    j=size-1;
    cout<<"\n\nEnter the position to be inserted a new item : ";
    cin>>position;
    cout<<"Enter the new ITEM: ";
    cin>>ITEM;

    while(j>=position)
    {
        Array[j+1]=Array[j];
        j=j-1;
    }
Array[position]=ITEM;
size=size+1;
cout<<"\nArray size="<<size;
cout<<"\nArray elements are: ";
for(i=0;i<size;i++)
     cout<<Array[i]<<" ";

}
return 0;
}
