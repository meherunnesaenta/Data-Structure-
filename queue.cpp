 #include<iostream>
#define N 5
using namespace std;
int front=-1,rear=-1;
int queue[N];
void enqueue()
{
    if(rear==N-1)
    {
        cout<<"overflow!!";
    }
    else
    {
        if(front==-1)
            front=0;
            cout<<"insert the in queue: ";
            int val;
            cin>>val;
            rear++;
            queue[rear]=val;

    }
}
void dequeue()
{
    if(front==-1 ||front>rear)
    {
        cout<<"underflow!!";
        return ;
    }
    else{
        cout<<"Element Deleted: "<<queue[front]<<endl;
        front++;
    }
}
void display()
{
    if(front==-1 ||front>rear)
    {
        cout<<"Empty";

    }
    else
    {
        cout<<"queue size: "<<rear+1<<endl;
        cout<<"Elements are: ";
        for(int i=front;i<=rear;i++)
        cout<<queue[i]<<" ";
        cout<<endl;
    }

}
int main()
{
     int choice;
     while(1)
     {
         cout<<"**********queue list********";
         cout<<"\nInsertion\n2.Deletion\n3.Display\n4.Exit\n";
         cout<<"Enter your choice: ";
         cin>>choice;
         switch(choice)
         {
         case 1:
            enqueue();
            break;
         case 2:
            dequeue();
            break;
         case 3:
            display();
            break;
         case 4:
            cout<<"Exit"<<endl;
            break;
         default:
            cout<<"wrong choice!!!! Try again!";
            break;
         }
     }

}
