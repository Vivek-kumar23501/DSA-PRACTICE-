#include<iostream>
using namespace std;
int bin( int arr [],int beg, int end,int key );
int main()
{
	int beg, end ;
	int arr[110];
	cout<<"enter the number of term "<<endl;
	int n;
	cin>>n;
	int i;
	beg=0;
	end=n-1;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
		int key;
	cout<<"enter the value which you want to search "<<endl;
	cin>>key;
	
int res=bin(arr,beg,end,key);
cout<<res;
}

int bin(int arr[],int beg, int end,int key )
{

	int mid=(beg+end)/2;
	
	if(key<arr[mid])
	{
	bin(arr,beg,mid,key);	
	}

	else if(key>arr[mid])
	{
		bin(arr,mid+1,end,key);
	}
	else if(arr[mid]==key)
	{
	return mid;	
	}
}
