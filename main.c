#include <stdio.h>
#include <conio.h>
main()
{
	char ch;
	int choice,a,b,c,d;
	printf("calculator");
    printf("comparission");
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
           printf("enter choice");
           scanf("%c",&ch);
           
    switch(ch){
	
           case'A' : 
               c=a+b;
               printf("the addition is %d",c);
               break;
           case 'B': 
		       c=a-b;
			   Printf("the substraction is %d",c); 
               break;
            case 'C': 
                c=a*b;
                printf(" the multiplication is %d",c);
                break;
            case  'D': 
                c=a/b;
                printf("the division is %d",c);
                break;
            default:
            	printf("enter a valid number");
            	}
            case 2 :
            	printf("enter your choice for two or three number");
      	scanf("%c",&ch);
      	switch(ch)
      	{
            case 'a':
            	printf("enter two numbers for comparission");
            	scanf("%d %d",&a,&b);
            	if(a>b)
            	{
            		printf("a is greater");
				}
				else
				{
					printf("b is greater");
					break;
				}
			case 'b':
				printf("enter three numbers ");
				scanf("%d%d%d",&a,&b,&c);
				d=a>b&&a>c?a:(b>a&&b>c?b:c);
				printf("the largest number is %d",d);
			default:
				printf("enter a valid number");
				getch();
	    }
    }
}
