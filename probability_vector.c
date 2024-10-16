#include<stdio.h>
int main()
{
    // variables of this program are declared
    int  i ;
    float arr[10], sum = 0;
    //array elements are initialized here 
    printf("\n enter array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%f",&arr[i]);
        sum = sum + arr[i];
    }

    // the 2 conditions to check weather they are probability vector or not ?
    for(i=0;i<5;i++)
    {
        if(arr[i] >= 0 && sum == 1 )
            {
                printf("\n it's a probability vector");
                return 0;
            }
    }
    // if for loop become false this statement will execute
    printf("\n sorry!! it's not a probability vector");
}

// this is related to maths