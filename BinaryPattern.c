#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=2*N; i++)
    {
    	if(i%2==0)
    	{
		
        for(j=1; j<=i; j++)
        {
            // For every odd column print 1
            if(j % 2 == 1)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }

        printf("\n");
       }
    }

    return 0;
}
