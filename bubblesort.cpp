 #include<iostream>
#include<stdlib.h>
 #include<time.h>
 using namespace std;
 int main()
 {
     int size;
     cout<<"Enter the array size: ";
     cin>>size;
     int array[size],i,step,compare;
     srand(time(0));
     for(i=0;i<size;i++)
     {
         array[i]=rand()%50;
     }
     for(i=0;i<size;i++)
     {
        cout<< array[i]<<" ";
     }
     for(step=0;compare<size-1;step++)
     {
         for(compare=0;compare<size-1-step;compare++)
         {
             if(array[compare]>array[compare+1]);
                swap(array[compare],array[compare+1]);
         }
     }
     cout<<"\nSorted element are : ";
     for(i=0;i<size;i++)
     {
         cout<<array[i]<<" ";
     }
 }
