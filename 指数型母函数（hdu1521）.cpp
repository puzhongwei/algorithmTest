#include<stdio.h>
#include<string.h>

#include <iostream>
using namespace std;
int sum[55];
void cal()
{
    sum[0]=1;
    sum[1]=1;
    for(int i=2;i<=20;i++)
    sum[i]=sum[i-1]*i;
}    //计算n！

void qsort(int a[], int low, int high)
{
	int i = low, j = high;
	int tmp = a[low];
	if(i<j)
	{
		while(i<j)
		{
			while(i<j&&a[j]>=tmp)j--;
			if(i<j)
			{
				a[i++]=a[j--];
			}

			while(i<j&&a[i]<tmp)i++;
			if(i<j)
			{
				a[j--]=a[i++];
			}
		}
		a[i]=tmp;
		qsort(a,low,i-1);
		qsort(a,i+1,j);
	}
}

int main()
{
    /*cal();
    int i,j,k;
    double c1[55],c2[55];
    int n,m,num[30];

    while(~(scanf("%d%d",&n,&m)))
    {
        for(i=1;i<=n;i++)
        scanf("%d",&num[i]);
        memset(c1,0,sizeof(c1));
        memset(c2,0,sizeof(c2));
        for(i=0;i<=num[1];i++)
        {
            c1[i]=1.0/sum[i];
        }
    
        for(i=2;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                for(k=0;k+j<=m&&k<=num[i];k++)
                c2[k+j]+=c1[j]/sum[k];
            }
            for(j=0;j<=m;j++)
            {
                c1[j]=c2[j];
                c2[j]=0;
            }
        }
        printf("%.0f\n",c1[m]*sum[m]);  //注意指数型母函数的形式，最后得出答案时要乘上m!
    }*/
	int a[]={1,-3,5,8,19};
	qsort(a,0,4);
	for(int i =0 ; i < 5; ++i)
	{
		cout<<a[i]<<"  ";
	}
	cout<<endl;
    return 0;
}