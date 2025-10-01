#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the value of number of term of 1st element  "<<endl;
	cin>>n;
	int i;
	int arr[10];
	for(i=0;i<n;i++)
	{
		cout<<"enter the  "<<i+1<<"element of the 1st sorted  array: ";
		cin>>arr[i];
	}
	
		int m;
	cout<<"enter the value of number of term of 2nd array element  "<<endl;
	cin>>m;
	int j;
	int brr[10];
	for(j=0;j<m;j++)
	{
		cout<<"enter the "<<j+1<<" element of the 2nd sorted array :";
		cin>>brr[j];
	}
	int k=0;
	int crr[20];
i=0,j=0;
while(i<n&&j<m)
	{
		if (arr[i]<brr[j])
		{
			crr[k]=arr[i];
			i++;
			k++;
		}
		else
		{
			crr[k]=brr[j];
			j++;
			k++;
		}
	}
	while(i < n) crr[k++] = arr[i++];
    while(j < m) crr[k++] = brr[j++];
    
	for(k=0;k<n+m;k++)
	{
		cout<<crr[k]<<endl;
	}
     
}

