// (d)Create a structure to store the data of students with the following fields:
// Roll number, Name, Department, Course, Year of joining.
// Assume that there are not more than 50 students in the college.
// (i)Write a function to print the data of a student whose roll number is given
// (ii)course IT2001 is opted as a course by student.

#include<iostream>
#include<cstring>

using namespace std;


struct data{

	char roll_no[10];
	char name[20];
	char department[15];
	char course[10];
	int year_join;
};

void print(char roll_no[],int n, struct data student[])
{
	int y=-1;

	for(int i=0;i<n;i++)
	{
		if(strcasecmp(roll_no,student[i].roll_no)==0)
		{
			y=i;
			break;
		}
	}

	if(y!=-1)
	{
		cout<<student[y].name<<endl;
		cout<<student[y].department<<endl;
		cout<<student[y].course<<endl;
		cout<<student[y].year_join<<endl;
	}
}

int main()
{
	int n,t;
	char roll_no_find[10];
	cout<<"enter no of data of students you want to enter"<<endl;
	cin>>n;
	struct data student[n];
	for(int i =0;i<n;i++)
	{
		cout<<"enter roll no of student"<<endl;
		cin>>student[i].roll_no;

		cout<<"enter name of student"<<endl;
		// cin>>student[i].name;
		cin.getline(student[i].name,20);
		cout<<"enter in which department student study "<<endl;
		cin>>student[i].department;

		cout<<"enter course name"<<endl;
		cin>>student[i].course;

		cout<<"enter which year student joined"<<endl;
		cin>>student[i].year_join;
	}

	cout<<"enter no of data you want to find"<<endl;

	cin>>t;

	while(t--)
	{
		cout<<"enter the roll no of student whose data you want to find"<<endl;
		cin>>roll_no_find;
		print(roll_no_find,n,student);
	}


	cout<<endl;
	cout<<endl;

	cout<<"student who opted for course IT2001 are"<<endl;

	for(int i=0;i<n;i++)
	{
		if(strcasecmp(student[i].course,"IT2001")==0)
		{
			cout<<student[i].name<<endl;
		}
	}


	return 0;
}