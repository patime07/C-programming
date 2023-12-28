
#include<stdio.h>
#include<math.h>
#define size 8
double Square(double *p);
int main(){
    double Array[size];
    int i;
    double mean,dev,sum=0,sum_square=0,result;
    
    printf("Enter %d intergers: \n",size);
    for (i=0; i<=size-1; i++)
    {
        scanf("%lf",&Array[i]);
        sum=sum+Array[i];//the sum of the elements
        result=Square(&Array[i]);
        sum_square=sum_square+result;//the sum of the squares
    }
    printf("The elements of the array are: ");//Print the array
    for (i=0; i<=size-1; i++) {
        printf("%lf  ",Array[i]);
    }
    printf("\n");
    printf("The sum of all integers in the array is: %lf\n",sum);
    printf("The sum of all squares of the integers in the array is: %lf\n",sum_square);
    //the mean
    mean=sum/size;
    printf("The average of the array is: %lf\n",mean);
    //the standard deviation
    dev=sqrt(sum_square/size-Square(&mean));
    printf("The standard derivation of the array is: %lf\n",dev);
    
    
    
    
    return 0;
}
double Square(double *p){
    double result;
    result= *p * *p;
    return result;
}
