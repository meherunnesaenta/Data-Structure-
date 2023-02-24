 #include<iostream>
 #include<time.h>
 #include<stdlib.h>

 using namespace std;
 int main()
 {
     int size, i,J,position;
     cout <<"Enter the size of the Array: ";
     cin>>size;
     int Array[size];
     srand(time(0));
     for(i=0;i<size;i++)
        Array[i] = rand()%50;
     cout <<"\nInputed Array Elements are: ";
     for(i=0;i<size;i++)
        cout<<Array[i]<<" ";
     while(1)
     {

         cout<<"\n\nEnter the position to be deleted an item: ";
         cin>>position;
         for(J=position;J<size-1;J++)
            Array[J]=Array[J+1];
         size = size-1 ;
         cout<<"\nArray Size: "<<size;
         cout<<"\nArray Elements are: ";
         for(i=0;i<size;i++)
         cout<<Array[i]<<" ";
         while(1)
         {
             cout<<"\n\nEnter the position to be deleted an item: ";
             cin>>position;
             for(J=position;J<size-1;J++)
                Array[J]=Array[J+1];
             size =size-1;
             cout<<"\nArray Size: "<<size;
             cout<<"\nArray Elements are: ";
             for(i=0;i<size;i++)
                cout<<Array[i]<<" ";
         }

     }
     return 0;
 }

