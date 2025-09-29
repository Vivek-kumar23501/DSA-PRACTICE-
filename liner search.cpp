#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of term "<<endl;
	cin>>n;
	
	cout<<"enter the element "<<endl;
	int i;
	int arr[10];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the number which you want to search "<<endl;
	int key;
	cin>>key;  
	int count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			cout<<i;
			count++;
		}
		
	}
	if(count==0)
	{
		cout<<"your search element not found in this array "<<endl;
	}
	
}
