#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int Arr[n][n];
	int Brr[n][n];
	int x=0,y=0;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>Arr[i][j];
			if((i!=j && Arr[i][j]!=0 )||(i==j && Arr[i][j]!=1) )
			{
				x=1;
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>Brr[i][j];
			if((i!=j && Brr[i][j]!=0 )||(i==j && Brr[i][j]!=1))
			{
				y=1;
			}
		}
	}

	if(x==0&y==0)
	{
		cout<<"both matrices are identical"<<endl;
	}else if(x==0)
	{
		cout<<"only first matrix is identical"<<endl;
	}else if(y==0)
	{
		cout<<"only second matric is identical"<<endl;
	}

	int sum[n][n]={0};
	int diff[n][n]={0};


	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			sum[i][j]=Arr[i][j]+Brr[i][j];
			diff[i][j]=Brr[i][j]-Arr[i][j];
		}
	}

	cout<<"the upper traingular sum of matrices is "<<endl;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<"the upper traingular diff of matrices is "<<endl;


	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<diff[i][j]<<" ";
		}
		cout<<endl;
	}


	return 0;
}