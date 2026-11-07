#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter the number : ");
    //reciving the number from user
    scanf("%d",&n);


    for (int i=1; i<=10; i++)
    {
        x=n*i;
        printf("%2d X %2d  =  %2d\n",n,i,x);
        //printing the table of the number(n)
    }


    return 0;
}
