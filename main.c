#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include<stdlib.h>

void main()
{
    int a,b,c,choice,k,l;
    float x,y,z;
    int frac(int);
    while(1)
    {

    printf("\n\t\tSelect the option you want to perform from below\n");
    printf("\n1.Addition\n2.subtraction\n3.multiplication\n4.Division\n5.checking divisibility\n6.comparission\n7.clear screen\n10.exit\n\n\t\t\t\t");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter two numbers\n");
        scanf("%f%f",&x,&y);
        z=x+y;
        printf("the sum of %f and %f is %f\n",x,y,z);
        break;
    case 2:
        printf("Enter two numbers\n");
        scanf("%f%f",&x,&y);
        printf("the difference of %f and %f is %f\n",x,y,x-y);
        break;
    case 3:
        printf("Enter two numbers\n");
        scanf("%f%f",&x,&y);
        printf("The product of %f and %f is %f\n",x,y,x*y);
        break;
    case 4:
        printf("Enter two numbers\n");
        scanf("%f%f",&x,&y);
        z=x/y;
        printf("the answer is %f\n",z);
        break;
    case 5:
        printf("Enter two numbers\n");
        scanf("%d%d",&a,&b);
        c=a%b;

        if(c==0)
        {
           printf("It is  divisible");
        }
        else
        {
            printf("It is not fully divisible it will give remainder");
        }


        break;

    case 6:
        printf("enter two numbers for comparission\n");
     	scanf("%d%d",&a,&b);
       	if(a>b)
       	{
    		printf("%d is greater",a);
        }
		else
		{
            printf("%d is greater",b);
		}
		break;
    case 7:
        system("cls");
        break;

    case 10: exit(1);
    default:
        printf("\nInvalid choice");
    }
    getch();
   }

}


