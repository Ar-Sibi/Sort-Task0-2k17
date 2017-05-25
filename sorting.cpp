#include<iostream>	
	void main()
	{int arr[]={100,4,3,6,12,-200,7};
	sort(arr,0,arr.length-1);
	la(arr);
	}
	public static void merge(int* arr,int left,int middle,int right)
	{	int lsize=middle-left;
		int rsize=right-middle;
		int L [1000];
		int R [1000];
		for(int i=0;i<=lsize;i++)
			L[i]=arr[left+i];
		for(int j=0;j<rsize;j++)
			R[j]=arr[middle+j+1];
		int i=0,j=0;
		while(i<=lsize&&j<rsize)
		{
			if(L[i]<=R[j])
				{arr[left+i+j]=L[i];i++;}
			else
				{arr[left+i+j]=R[j];j++;}
		}
		while(i<=lsize)
		{
			arr[left+i+j]=L[i];
			i++;
		}
		while(j<rsize)
		{
			arr[left+i+j]=R[j];
			j++;
		}
	}
	public static void sort(int* arr,int l ,int r)
	{
		if(l<r)
		{
			int m =(l+r)/2;
			sort(arr,l,m);
			sort(arr,m+1,r);
			merge(arr,l,m,r);
			
		}
			}
	public static void la(int a[] )
	{
		for(int i=0;i<a.length;i++)
			cout<<(a[i])<<" ";	
			}