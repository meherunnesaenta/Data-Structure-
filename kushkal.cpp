#include <iostream>
using namespace std;

int main()
{
	int n, i, j, weight[20][20], sv, visited[20]={0}, step = 1, Min, a, b, minCost=0;
	cout<<"Enter the no of vertices: ";
	cin>>n;
	cout<<"Enter weighted matrix: \n";
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			cin>>weight[i][j];
			if(weight[i][j]==0)
				weight[i][j] = 99;
		}
	}

	cout<<"Weighted matrix: \n";
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			cout<<weight[i][j]<<" ";
		}
		cout<<"\n";
	}

	while(step<n)
	{
		Min = 99;
		for(i=1; i<=n; i++)
		{
			for(j=1; j<=n; j++)
			{
				if(weight[i][j]<Min)
				{
						Min = weight[i][j];
						a = i;
						b = j;
				}
			}
		}
		if(visited[a]==0 || visited[b]==0)
		{
			cout<<"("<<a<<","<<b<<")="<<Min<<"\n";
			minCost = minCost+Min;
			visited[b] = visited[a]= 1;
			step++;
		}
		weight[a][b]=weight[b][a]=99;
	}
	cout<<"MinCost="<<minCost;
}
