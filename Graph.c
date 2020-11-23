#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter how many Number of Matrix You wanto insert?: ");
    scanf("%d",&n);

    int matrix[n][n];
    printf("Enter Connection\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("If %d is connected to %d ,Press 1 else press 0\n",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
prinf("\nAdjacency Matrix\n");
      for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
