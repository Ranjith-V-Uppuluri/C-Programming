#include<stdio.h>

int main()
{
	int ch;
	printf("enter you choice \n");
	printf("1.Pizza\n");
    printf("2.Burger\n");
    printf("3.Pasta\n");
    printf("4.French Fries\n");
    printf("5.Sandwich\n");
    scanf("%d",&ch);
    switch(ch)
    {
    	case 1:
    		printf("Food item:Pizza\n");
    		printf("Price:239");
    		break;
    	case 2:
    		printf("Food item:Burger\n");
    		printf("Price:129");
    		break;
    	case 3:
    		printf("Food item:Pasta\n");
    		printf("Price:179");
    		break;
    	case 4:
    		printf("Food item:French Fries\n");
    		printf("Price:99");
    		break;
    	case 5:
    		printf("Food item:Sandwich\n");
    		printf("Price:149");
    		break;
    	default:
    		printf("ivalid choice");
    		
	}
    
}
