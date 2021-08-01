#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char A[10000];
	cin.getline(A,10000);
	char B[10000];
	int x=0;
	for(int i=0;i<strlen(A);i++)
	{
		if(A[i]==' ' || i==strlen(A)-1)
		{
			int j;
			
			if(A[i]==' ')
			{
			j=i-1;
			}
			else
			{
			    j=i;
			}
			while(A[j]!=' ' && j>=0)
			{
				if(A[j]=='a'|| A[j]=='e'|| A[j]=='i'|| A[j]=='o'|| A[j]=='u')
				{
					B[x]=toupper(A[j]);

				}
				else
				{
					B[x]=A[j];
				}
				x++;
				j--;
			}
			if(A[i]==' ')
			{
				B[x]=' ';
			}
			else
			{
				B[x]='\0';
			}
			x++;
		}
	}

	for(int i=0;i<strlen(A);i++)
	{
		cout<<B[i];
	}
	cout<<endl;

	return 0;

}