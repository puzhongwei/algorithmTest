#include<iostream>

using namespace std;



void merge(int a[],int low,int mid,int high)

{

	int i=low,j=mid+1,k=0;

	int *tmp=new int[high-low+1];

	while(i<=mid&&j<=high)

	{

		if(a[i]<a[j])

			tmp[k++]=a[i++];

		else

			tmp[k++]=a[j++];

	}

	while(i<=low)

		tmp[k++]=a[i++];

	while(j<=high)

		tmp[k++]=a[j++];

	int p=0;

	for(p=0,i=low;p<k;p++,i++)

		a[i]=tmp[p];

	delete []tmp;

}

void mergeSort(int a[],int low ,int high)

{

	if(low<high)

	{

		int mid=(high+low)/2;

		mergeSort(a,low,mid);

		mergeSort(a,mid+1,high);

		merge(a,low,mid,high);

	}

}

int main()

{

	int a[]={1,3,5,2,8};

	mergeSort(a,0,4);

	for(int i=0;i<5;i++)

		cout<<a[i]<<" ";

	cout<<endl;

	return 0;

}
