#include<stdio.h>
#include<math.h>
int convert(int , int , int );
int main()
{
    int n1,n2,num1,num2;
    int no1[10];
    int no2[10];
printf("\nEnter radix of input number:");
scanf("%d",&n1);

printf("\nEnter input number:");
scanf("%d",&num1);

printf("\nEnter radix of output number:");
scanf("%d",&n2);

convertOne(n1,num1,n2);
}

void convertOne(int a, int b, int c)
{
    int deci[7],count=0;
    int i,j=0,sum=0;
	int string[20];
    for(i=0;i<4;i++)
    {
        deci[i]=b%10;
        sum = sum + deci[i]*pow(a,i);
        b=b/10;
        count++;
    }
   // printf("\nDecimal num: %d",sum);
    
   	while(sum>0)
   	{
    	string[j]=sum%c;
		sum=sum/c;
		j++;	
	}
    for(j=j-1;j>=0;j--)
    {
    	printf(" %d",string[j]);
	}
}
