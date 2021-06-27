#include<stdio.h>

struct emp
{
    char ename[20];
    int eage;
    int ephone;
    float esal;
};
int main()
{
	
    int i,j,n=20,m;
    struct emp e[n];
    printf("enter the number of employee details to entered out of 20");
    scanf("%d",&m);
    printf("Enter Employee detail \n");
    for(i=1;i<=m;i++)
    {
        printf("enter the details of %d employee",i);
        printf("Emp Name :-\t");
        scanf("%s",&e[i].ename);
        printf("Emp age. :-\t");
        scanf("%d",&e[i].eage);
        printf("Emp phonenumber. :-\t");
        scanf("%d",&e[i].ephone);
        printf("Emp salary :-\t");
        scanf("%f",&e[i].esal);
        printf("\n \n");
    }
    printf("employee_Name\temployee_Age\temployee_PhoneNumber\tEmployee_Salary");
   	for(i=1;i<=m;i++)
	   {
            printf(" \n%s\t\t%d\t\t%d\t\t\t%f",e[i].ename,e[i].eage,e[i].ephone,e[i].esal);
       }
}
