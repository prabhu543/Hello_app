#include<stdio.h>
int main()
{
    int a[10][10] ,i,j, m ,n;
    printf("enter array size row and columns:");
    scanf("%d %d", &m,&n);
    // we only need square matrix where m=n
    if(m==n)
    {
        // reading elements of array
        printf("array elements:");
        for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                    scanf("%d",&a[i][j]);
            }

        //printing elements of array 
        printf("array elements:\n");
        for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                    printf("%d\t",a[i][j]);
                printf("\n");
            }
        

    }
    else
        printf("invalid to get stocastic vector");
}