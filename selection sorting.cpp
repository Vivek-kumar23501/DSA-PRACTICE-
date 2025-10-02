#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the no. of term "<<endl;
	cin>>n;
	cout<<"enter the element of the array "<<endl;
	int i=0;
	int arr[n];
	for (i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		int j=0;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				swap(arr[i],arr[j]);
			}
		}
		
	}
	cout<<"sorted array are "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
}
