#include <stdio.h>

int Floyd_Triangle(int);

int main(){
    int rows, result;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    result=Floyd_Triangle(rows);
    return 0;
}

int Floyd_Triangle(int x){
    int i,j;
    for (i=1; i<=x; i++)
    {
        for (j=1; j<=i; j++)
            if ((i+j)%2==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        printf("\n");
    }
    return 0;
}
