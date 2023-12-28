//Multiplication of 2 matrices
#include<stdio.h>
#define size1 3
#define size2 3
int main (){
   
    //elements of the 2 matices
    int i,j,sum=0;
    int product[3][3];
    int M1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int M2[3][3]={{1,2,3},{7,8,9},{4,5,6}};
    //multiplication
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            for (int k=0; k<3; k++)
            {
                sum = sum+(M1[i][k]*M2[k][j]);
            }
            product[i][j]=sum;
            sum=0;
        }
    }
   //resultant matrix
   for (i=0; i<3; i++)
   {
      for (j=0; j<3; j++) {
         printf("%d\t",product[i][j]);
      }
      printf("\n");
   }
    return 0;
}
