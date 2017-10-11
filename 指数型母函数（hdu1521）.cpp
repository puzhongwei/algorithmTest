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


int main()
{
    cal();
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
    }
    return 0;
}