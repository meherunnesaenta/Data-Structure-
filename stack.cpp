 #include<iostream>
 #define MAXSIZE 5
 using namespace std;
 int STACK[MAXSIZE],ITEM,TOP=0,i;
 int Push()
 {
    if(TOP==MAXSIZE)
        cout<<"STACK is full!! OVERFLOW"<<endl;
    else
    {
     cout<<"Enter the ITEM: ";
     cin>>ITEM;
     cout<<"###position "<<TOP<<",PUSHED VALUE " <<ITEM<<endl;
     STACK[TOP]=ITEM;
     TOP=TOP+1;
    }


 }
 int Pop()
 {
    if(TOP==0)
    {
        cout<<"STACK is empty !! UNDERFLOW"<<endl;
    }
    else
    {
        TOP=TOP-1;
        cout<<"###position "<<TOP<<" POP VALUE "<<STACK[TOP]<<endl;
    }
 }
 int Display()
 {
   if(TOP==0)
    {
        cout<<"STACK is empty !! UNDERFLOW"<<endl;
    }
    else
    {
        cout<<"STACK Size: "<<TOP;
        for(i=TOP-1;i>=0;i--)
        {
            cout<<"###position "<<i<<",VALUE : "<<STACK[i]<<endl;
        }
    }
 }
 int main()
 {
     int choice;
     cout<<"Press 1 for PUshed value "<<endl;
     cout<<"Press 2 for pop value"<<endl;
     cout<<"Press 3 for Display"<<endl;
     cout<<"press 4 for Exit"<<endl;
     do
     {
         cout<<"Enter your choice : ";
         cin>>choice;
         switch(choice)
         {
         case 1:
            Push();
            break;
         case 2:
            Pop();
            break;
         case 3:
            Display();
            break;
         case 4:
            cout<<"Exit";
            break;
         default:
            cout<<"wrong choice!! Try again"<<endl;
         }
     }while(choice!=4);
 }
