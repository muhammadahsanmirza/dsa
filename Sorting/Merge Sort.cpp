#include<iostream>
using namespace std;
void merge(int arr[], int l,int m,int r)
{
//	cout<<"\nThe values of l in merge() is ====> \t"<<l<<endl;
//	cout<<"\nThe values of m in merge() is ----> \t"<<m<<endl;
//	cout<<"\nThe values of r in merge() is ====> \t"<<r<<endl;
	int i,j,k;
	i=l;
	j=m+1;
	k=l;
	
	int temparr[9];
	while(i<=m && j<=r)
	{
		if(arr[i]<=arr[j])
		{
			temparr[k]=arr[i];
			i++;
			k++;
		}
		else
		{
			temparr[k]=arr[j];
			j++;
			k++;
		}
	}
	while(i<=m)
	{
		temparr[k]=arr[i];
			i++;
			k++;
	}
	while(j<=r)
	{
		temparr[k]=arr[j];
			j++;
			k++;
	}
	for(int i=l;i<=r;i++)
	{
		arr[i]=temparr[i];
	}
}

void mergeSort(int arr[], int l,int r)
{
//	cout<<"\n\nThe values of l in mergeSort() is ====> \t"<<l<<endl;
//	cout<<"\nThe values of r in mergeSort() is ====> \t"<<r<<endl;
	if(l<r)
	{
		int m=(l+r)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);
	}
	
}
int main()
{
	const int size=9;
	int arr[size]={6,7,9,8,3,5,2,1,4};
	int l=0, r=size-1;
	cout<<"Current Array is"<<endl;
	for (int i = 0; i < size; i++)
	{
        cout << arr[i] << " ";
	}
	mergeSort(arr,l,r);
	cout<<"\nArray after merge sort is"<<endl;
	for (int i = 0; i <size; i++)
        cout << arr[i] << " ";
 return 0;
}

