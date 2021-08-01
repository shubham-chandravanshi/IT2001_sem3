#include <iostream>
#include <cstring>
using namespace std;

struct record {
	int weight;
	long long int phone_number;
	int height;
	char blood_group[5];
	int temp;
};

int main()
{
	int n;
	cout<<"number of patient to insert"<<endl;
	cin>>n;
	struct record patient[n];

	for(int i=0;i<n;i++)
	{
		cout<<"enter patient's phone number"<<endl;
		cin>>patient[i].phone_number;

		cout<<"enter patient's weight"<<endl;
		cin>>patient[i].weight;

		cout<<"enter patient's temperature"<<endl;
		cin>>patient[i].temp;

		cout<<"enter patient's blood group"<<endl;
		cin>>patient[i].blood_group;

		cout<<"enter patient's height"<<endl;
		cin>>patient[i].height;
	}

cout<<"List people with weight more than 50 Kg or blood group B+"<<endl;

for(int i=0;i<n;i++)
{
	if(patient[i].weight>50 || strcasecmp(patient[i].blood_group,"B+")==0)
	{
		cout<<" patient with index - "<<i<<" and mobile number - "<<patient[i].phone_number<<endl;
	}
}


cout<<endl;
cout<<endl;


cout<<"List people with rare blood groups : A-,B-,AB+, AB-"<<endl;



for(int i=0;i<n;i++)
{
	if(strcasecmp(patient[i].blood_group,"A-")==0 || strcasecmp(patient[i].blood_group,"B-")==0 || strcasecmp(patient[i].blood_group,"AB+")==0 || strcasecmp(patient[i].blood_group,"AB-")==0)
	{
		cout<<" patient with index - "<<i<<" and mobile number - "<<patient[i].phone_number<<endl;
	}


}


return 0;


}


