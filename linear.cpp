 #include<iostream>
 #include<time.h>
 #include<stdlib.h>
 using namespace std;
 int main()
 {
     int size,i,item,location=0;
     cout<<"Enter the array size: ";
     cin>>size;
     int array[size];
     srand(time(0));
     for(i=0;i<size;i++)
     {
         array[i]=rand()%50;
     }
     cout<<"Random element are: ";
     for(i=0;i<size;i++)
     {
         cout<<array[i]<<" ";
     }
     cout<<endl;
     while(1)
     {
         cout<<"Enter the search element is : ";
         cin>>item;
         while(array[location]!=item && location<=size-1)
            location=location+1;
         if(location==size)
         {
             cout<<"Element not found"<<endl;
             location=0;

         }
         else
            {
                cout<<location<< " is element "<<item<<endl;
                location=0;
            }

     }
 }
