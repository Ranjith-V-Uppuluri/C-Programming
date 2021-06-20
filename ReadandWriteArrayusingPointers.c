#include<stdio.h>

main()
{
	int arr[10][10],i,j,sum=0;
	printf("enter the elements in the array 3*3\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("enter the [%d][%d] element in the array",i,j);
			scanf("%d",(*(arr + i)+j)); //(*(arr + i)+j)==&arr[i][j]
		}
	}
	printf("the array is\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d \t",*(*(arr + i)+j));//*(*(arr + i)+j)==arr[i][j]
		}
		printf("\n");
	}
	for(i=1;i<=3;i++)
	{
		sum=sum+*(*(arr + i)+i);//*(*(arr + i)+i)==arr[i][i]
	}
	printf("\nThe sum of all diagonal elements is:%d",sum);
	
}
