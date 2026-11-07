#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER : ");
    //receiving the numbers from the user
    scanf("%d",&n);

    for (int i=1; i<=n; i++)
    {
        printf("%d\n",i);
        //printing the numbers from 1to n;
    }


    return 0;

}
