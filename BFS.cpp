#include <iostream>
using namespace std;
int main()
{
    int n, m, k, i, j, graph[10][10]={0}, v, visited[10]={0}, Queue[10]={0}, Rear=0, Front=0, connection[10]={0};
    cout<<"Enter the number of vertices: ";
    cin>>n;
    cout<<"Enter the number of edges: ";
    cin>>m;

for(k=1; k<=m; k++)
    {
        cin>>i>>j;
        graph[i][j]=1;
    }

for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<"\n";
    }

cout<<"Enter the starting vertex: ";
    cin>>v;
    cout<<"BFS order: ";
    cout<<v<<" ";
    visited[v] = 1;

int step=1;
while(step<n)
{
for(j=1; j<=n; j++)
{
if(graph[v][j]==1 && visited[j]==0 && connection[j]==0)
{
connection[j] = 1;
Queue[Rear] = j;
Rear = Rear+1;
}
}
v = Queue[Front];
Front++;
cout<<v<<" ";
visited[v]=1;
connection[v] = 0;
step++;
}
}
